*This project has been created as part of the 42 curriculum by akacar.*

# Description
Libft is the first project of the 42 curriculum. The aim of this project is to code a C library from scratch, which will contain numerous general-purpose functions to be used throughout future curriculum assignments. It provides a deep understanding of standard C library (libc) behaviors, memory allocation, and basic data structures.

## Detailed Library Contents
This library consists of three main parts:
* **Part 1 - Libc Functions:** Custom rewritten versions of standard C library functions (e.g., `ft_strlen`, `ft_memset`, `ft_memcpy`, `ft_isalpha`).
* **Part 2 - Additional Functions:** Useful utility functions for string manipulation and memory allocation that are not part of the standard libc (e.g., `ft_split`, `ft_strtrim`, `ft_itoa`).
* **Part 3 - Linked Lists:** Functions designed to create, iterate over, and manipulate linked list data structures (e.g., `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`).

## Instructions
You can use the provided `Makefile` in the project to compile the library. The `cc` compiler is used with strict flags (`-Wall -Wextra -Werror`).

You can run the following commands in the terminal:
* `make` - Compiles the mandatory part and creates the `libft.a` library.
* `make clean` - Removes the object (`.o`) files generated during compilation.
* `make fclean` - Completely removes the object files and the main `libft.a` file.
* `make re` - Cleans and completely recompiles the library from scratch.

## Resources
* **Documentation:** The `man` pages (e.g., `man 3 string`) were extensively utilized to understand the exact expected behaviors, return values, and edge cases of the original libc functions.
* **AI Usage:** GitHub Copilot (providing access to OpenAI and Anthropic models) was used in my development workflow. AI was strictly not used to generate direct code or logic; it was solely utilized as a guide to theoretically understand complex pointer arithmetic, clarify concepts like memory overlap in `memmove`, and grasp the 42 Norm rules. The coding and problem-solving processes of the project were accomplished entirely through personal intellectual effort.