# Own `printf` Implementation in C

A custom implementation of the `printf` function in the C programming language, written in C. This project provides you with a deeper understanding of how the `printf` function works internally.
- The practice of using Variable Argument (`va_list`).
- Using only `write(int fd, const void buf[.count], size_t count)` for printing.

---
## Usage
To build the library `libftprintf.a`, simply use the `make` command in your terminal.

```c
//  main.c

#include "ft_printf.h"

int main()
{
    ft_printf("Hello, world!\n");
    return 0;
}
```

Compile and execute:
```bash
gcc main.c -L. -lftprintf -o main
./main
```

---
## Format Specifiers
| Specifier         | Type                                  |
|-------------------|---------------------------------------|
| c                 | unsigned char                         |
| s                 | const char *                          |
| d                 | int                                   |
| i (the same as d) | int                                   |
| p                 | void * (hexadecimal)                  |
| u                 | unsigned int                          |
| x                 | unsigned int (hexadecimal. lowercase) |
| X                 | unsigned int (hexadecimal. uppercase) |

---
## Other Examples
```c
ft_printf("|%1.5d|\n", 123);
ft_printf("|%50.0p|\n", ptr);
ft_printf("|*%c%*c|\n", '0', 10, '1');
ft_printf("|%-8.4s|\n", "123456");
ft_printf("|%10.0d|\n", 13);
ft_printf("| 0*%0-*.*d*0 0*%0*.*d*0 |\n", 6, 2, 102, 10, 21, -423);
ft_printf("|%02x|\n", 698334);
```