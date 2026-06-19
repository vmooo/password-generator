# password-generator
CLI generates a password of the specified length with the specified characters and calculates the entropy

## build

In the root of the repository use
```bash
gcc -std=c99 -Wall -Wextra password_generator.c main.c -o bin/password_generator
```

The executable file will be located in `/bin` directory
