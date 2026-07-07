#include "password_generator.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    char* password = generate_password(10, true, true, true);
    float entropy = calculate_entropy(10, true, true, true);

    printf("%s - entropy: about %f.\n", password, entropy);

    free(password);

    return EXIT_SUCCESS;
}
