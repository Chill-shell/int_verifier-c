```
 _       _                    _  __ _
(_)_ __ | |_  __   _____ _ __(_)/ _(_) ___ _ __
| | '_ \| __| \ \ / / _ \ '__| | |_| |/ _ \ '__|
| | | | | |_   \ V /  __/ |  | |  _| |  __/ |
|_|_| |_|\__|   \_/ \___|_|  |_|_| |_|\___|_|
```

# int_verifier-c

A small, reusable C function that keeps asking the user until they type a valid integer.

I wrote it once so I never have to repeat the same input-checking code in every program. Copy the function into your project, call it, and get a clean `int` back.

## Usage

```c
int number = int_verifier();
printf("You picked: %d\n", number);
```

## Build and run the demo

```bash
gcc -Wall -Wextra main.c
./a.out
```

## How it behaves

| Input     | Result                      |
|-----------|-----------------------------|
| `12`      | accepted                    |
| `  12  `  | accepted                    |
| `-5`      | accepted                    |
| `abc`     | `Try again!`                |
| `12abc`   | `Try again!`                |
| `12 abc`  | `Try again!`                |

Leftover input is always discarded!

## Limitations

Designed for **INTERACTIVE KEYBOARD** use only:

- **No EOF handling.** Ctrl+D is not handled.
- **No overflow detection.** `scanf("%d")` cannot report values that are too large (for example `99999999999`).
- **Bare Enter is silent.** `scanf` skips whitespace, including Enter, and keeps waiting without printing anything.
- The prompt text is fixed inside the function.

## Files

- `main.c`: the function and a small demo program
