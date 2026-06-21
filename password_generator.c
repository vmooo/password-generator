#include "password_generator.h"

static char get_random_number() {
    return randombytes_uniform(10) + 48; /* The numbers in the ASCII table start with code 48 */
}

static char get_random_letter() {
    /* we have 26 letters in English alphabet */
    uint8_t alphabet_size = 26;

    if (randombytes_uniform(1)) {
        return randombytes_uniform(alphabet_size) + 65; /* letter 'A' has code 65 */
    }
    else {
        return randombytes_uniform(alphabet_size) + 97; /* letter 'a' has code 97 */
    }
}

static char get_random_special() {
    return '*';
}

char* generate_password(size_t length, bool include_numbers, bool include_letters, bool include_special) {
    if (sodium_init() < 0) {
        fprintf(stderr, "libsodium initialization failed!\n");
        return "";
    }

    char* password = malloc((length + 1) * sizeof(char));

    for (size_t i = 0; i < length; i++) {
        uint8_t symbol_type = randombytes_uniform(3);

        if (symbol_type == 0 && include_numbers) {
            password[i] = get_random_number();
        }
        else if (symbol_type == 1 && include_letters) {
            password[i] = get_random_letter();
        }
        else if (symbol_type == 2 && include_special) {
            password[i] = get_random_special();
        }
        else {
            --i; /* if got here, need to select the type symbol again */
        }
    }

    return password;
}

    
