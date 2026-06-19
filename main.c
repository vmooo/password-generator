#include "password_generator.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  const char* password = generate_password();
  printf("%s", password);

  return EXIT_SUCCESS;
}
