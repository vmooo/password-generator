#ifndef PASSWORD_GENERATOR
#define PASSWORD_GENERATOR

#include <stddef.h>
#include <stdbool.h>

const char* generate_password(size_t lenght, bool include_numbers, bool include_letters, bool include_special);

#endif /* ifndef PASSWORD_GENERATOR */
