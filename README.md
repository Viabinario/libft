*This project was created as part of the 42 curriculum by francisa.*

# Libft

## Description

This project consists of implementing a basic C function library, known as `libft`. The main goal is to recreate parts of the C standard library and build utilities for strings, memory, and linked lists. This library is designed to be used as a foundation in subsequent 42 projects, providing safe, tested functions compatible with the campus coding style.

## Library Created

`libft` includes functions from the following categories:

- Character classification and conversion: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- Memory management: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- String functions: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
- Conversion and output: `ft_atoi`, `ft_itoa`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- Linked list functions: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

These functions are custom implementations respecting the C standard prototypes and the 42 `Libft` project coding style.

## Functions and Main Features

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`: character checks based on ASCII values.
- `ft_toupper`, `ft_tolower`: character conversion between uppercase and lowercase, leaving non-alphabetic input unchanged.
- `ft_memset`, `ft_bzero`: memory block initialization and zeroing.
- `ft_memcpy`, `ft_memmove`: memory block copying; `ft_memmove` handles overlapping regions safely.
- `ft_memchr`, `ft_memcmp`: memory block search and comparison.
- `ft_calloc`: safe zero-initialized memory allocation.
- `ft_strlen`: null-terminated string length calculation.
- `ft_strlcpy`, `ft_strlcat`: string copying and concatenation with destination size control.
- `ft_strchr`, `ft_strrchr`: character search in a string from the beginning or the end.
- `ft_strncmp`, `ft_strnstr`: string comparison and search with character limit.
- `ft_strdup`: string duplication using dynamic memory.
- `ft_substr`, `ft_strjoin`, `ft_strtrim`: creation of new strings from substring, join, and trim operations.
- `ft_split`: string splitting into an array of strings based on a delimiter.
- `ft_strmapi`, `ft_striteri`: applying a function to each character of a string with its index.
- `ft_atoi`, `ft_itoa`: conversion between strings and integers.
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: writing characters, strings, lines, and numbers to file descriptors.
- Linked list structure `t_list` and associated functions:
  - `ft_lstnew`: creates a new node.
  - `ft_lstadd_front`, `ft_lstadd_back`: adds nodes at the beginning or end.
  - `ft_lstsize`, `ft_lstlast`: retrieves the list size and last node.
  - `ft_lstdelone`, `ft_lstclear`: deletes individual nodes and clears entire lists.
  - `ft_lstiter`: applies a function to each element of the list.
  - `ft_lstmap`: creates a new list by applying a function to each node's content.

## Instructions

1. Open a terminal in the `Libft` directory.
2. Run `make` to compile the library and generate the `libft.a` file.
3. Use `make clean` to remove the `.o` object files.
4. Use `make fclean` to remove both the object files and the `libft.a` library.
5. Use `make re` to recompile everything from scratch.

The `Makefile` is configured to compile each `.c` file listed in `SOURCES` and archive the resulting object files.

## Usage Example

To use the library in a project, include the header:

```c
#include "libft.h"
```

and link with `libft.a` during compilation, for example:

```sh
cc -Wall -Wextra -Werror main.c libft.a -o main
```

## Resources

- Linux Man-Pages
- C standard library documentation: https://en.cppreference.com/w/c
- FreeBSD source browser
- 42 normative for `libft` and coding style
- Articles and videos on string and memory handling in C
- Python Tutor: https://pythontutor.com/visualize.html#
- C Programming, K.N. King, 2nd Ed., 2008
- The C Programming Language, Kernighan & Ritchie, 2nd Ed., 1988
- 42 Norminette: https://github.com/42School/norminette

### AI Usage

AI (Claude Desktop) was used for:
- Creating explanatory animations with function simulations, iteration animations, and schematic visualizations.
- Deepening understanding of theoretical foundations in dynamic memory management, pointers, and linked lists.
- Consulting bibliographic and video references.

## Technical Decisions

- `cc` was used as the compiler with the `-Wall -Wextra -Werror` flags to detect warnings and errors.
- The library is generated as a static archive `libft.a` using `ar rcs`.
- A singly linked list was implemented using a `t_list` type and associated manipulation functions.

## Key Files

- `libft.h`: function declarations and `t_list` definition
- `Makefile`: compilation, cleanup, and rebuild rules
- `.c` files: individual function implementations
