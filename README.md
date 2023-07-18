# ft_printf

The `ft_printf` function is a custom implementation of the standard C library function `printf`. It provides a flexible and extensible way to format and print output to the standard output stream or a specified file descriptor.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Format Specifiers](#format-specifiers)
- [Contributing](#contributing)

## Introduction

The `ft_printf` function allows you to format and print output in a similar way to the standard `printf` function. It supports a wide range of format specifiers, allowing you to print various types of data, such as strings, numbers, and characters, with different formatting options.

## Features

- Supports a wide range of format specifiers, including `%s`, `%d`, `%f`, `%c`, and more.
- Handles various formatting options, such as width, precision, and flags.
- Supports printing to the standard output stream or a specified file descriptor.
- Extensible and customizable, allowing you to add your own format specifiers.

## Installation

To use the `ft_printf` function in your project, follow these steps:

1. Clone the repository to your local machine.
2. Run the provided Makefile to compile the `ft_printf` library.

```bash
make
```

This will generate a static library file named `libftprintf.a`.

3. Copy the `libftprintf.a` library file and the `ft_printf.h` header file into your project directory.

## Usage

The `ft_printf` function has the following prototype:

```c
int ft_printf(const char *format, ...);
```

- `format`: A format string that specifies the output format.

The function returns the number of characters printed (excluding the null terminator), or a negative value if an error occurs.

Here's an example of how to use the `ft_printf` function:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("The answer is %d.\n", 42);
    return 0;
}
```

Make sure to include the necessary headers and handle any error conditions appropriately.

## Format Specifiers

The `ft_printf` function supports a wide range of format specifiers, including:

- `%s`: String
- `%d` or `%i`: Signed decimal integer
- `%f`: Floating-point number
- `%c`: Character
- `%p`: Pointer
- `%o`: Octal number
- `%x` or `%X`: Hexadecimal number
- `%u`: Unsigned decimal integer

For a complete list of format specifiers and their options, please refer to the documentation in the `ft_printf.h` header file.

## Contributing

Contributions to the ft_printf project are welcome. If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

