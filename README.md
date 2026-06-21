# password-generator
CLI generates a password of the specified length with the specified characters and calculates the entropy

## External dependencies

- libsodium - 1.0.22 for secure random

## build


### MacOS

Install libsodium with Homebrew:
```bash
brew install libsodium
```

In the root directory build with GCC

```bash
gcc -std=c99 -Wall -Wextra password_generator.c main.c -o bin/password_generator.out $(pkg-config --cflags --libs libsodium)
```

Run with 
```bash
./bin/password_generator
```

### Linux

