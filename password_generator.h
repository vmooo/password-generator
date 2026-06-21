#ifndef PASSWORD_GENERATOR
#define PASSWORD_GENERATOR

#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <sodium.h>

/*****************************************
 *                                       *
 *  Returns pointer to array of chars,   *
 *  allocated by malloc                  *
 *                                       *
 *****************************************/
char* generate_password(size_t lenght, bool include_numbers, bool include_letters, bool include_special);

#endif /* ifndef PASSWORD_GENERATOR */
