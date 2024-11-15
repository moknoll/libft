# libft

`libft` is a custom C library that replicates various standard C library functions and implements additional useful functions. This project aims to create a set of common utility functions that can be used in future C projects.

## Features

- **String functions**:
  - `ft_atoi`: Converts a string to an integer.
  - `ft_itoa`: Converts an integer to a string.
  - `ft_strdup`: Duplicates a string.
  - `ft_strchr`: Locates the first occurrence of a character in a string.
  - `ft_strjoin`: Concatenates two strings.
  - `ft_strtrim`: Trims characters from the beginning and end of a string.
  - `ft_substr`: Extracts a substring from a string.
  - `ft_strmapi`: Applies a function to each character of a string and returns a new string.
  - `ft_strnstr`: Finds the first occurrence of a substring in a string (with a limit on the number of characters to search).
  - `ft_strrchr`: Locates the last occurrence of a character in a string.
  - `ft_strlcat`: Concatenates two strings with a limit on the size of the destination.
  - `ft_strlcpy`: Copies a string with a limit on the size of the destination.
  - `ft_strncmp`: Compares two strings up to a specified number of characters.

- **Memory functions**:
  - `ft_bzero`: Fills a block of memory with zeros.
  - `ft_calloc`: Allocates memory for an array of elements and initializes them to zero.
  - `ft_memchr`: Searches for a character in a block of memory.
  - `ft_memcmp`: Compares two blocks of memory.
  - `ft_memcpy`: Copies a block of memory.
  - `ft_memmove`: Safely moves a block of memory.
  - `ft_memset`: Fills a block of memory with a specified value.

- **Character functions**:
  - `ft_isalnum`: Checks if a character is alphanumeric.
  - `ft_isalpha`: Checks if a character is alphabetic.
  - `ft_isascii`: Checks if a character is an ASCII character.
  - `ft_isdigit`: Checks if a character is a digit.
  - `ft_isprint`: Checks if a character is printable.
  - `ft_tolower`: Converts a character to lowercase.
  - `ft_toupper`: Converts a character to uppercase.

- **Output functions**:
  - `ft_putchar_fd`: Writes a character to a specified file descriptor.
  - `ft_putstr_fd`: Writes a string to a specified file descriptor.
  - `ft_putendl_fd`: Writes a string followed by a newline to a specified file descriptor.
  - `ft_putnbr_fd`: Writes an integer to a specified file descriptor.

- **Linked List functions**:
  - `ft_lstnew`: Creates a new linked list node.
  - `ft_lstadd_front`: Adds a new node to the front of a linked list.
  - `ft_lstadd_back`: Adds a new node to the back of a linked list.
  - `ft_lstlast`: Returns the last node of a linked list.
  - `ft_lstsize`: Returns the size of a linked list.
  - `ft_lstdelone`: Deletes a node in a linked list.
  - `ft_lstclear`: Deletes all nodes in a linked list.

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/libft.git
    ```

2. Navigate to the project directory:
    ```bash
    cd libft
    ```

3. Include the `libft.h` header file and corresponding source files in your C project to use the library functions.

## Usage

You can include the `libft.h` header file in your C source files and use the functions as needed.

### Example:
```c
#include "libft.h"

int main() {
    // Example usage of the ft_atoi function
    const char *str = "12345";
    int num = ft_atoi(str);

    // Example usage of the ft_itoa function
    char *str_num = ft_itoa(num);

    // Print the result
    ft_putstr_fd(str_num, 1);
    
    // Free the allocated memory for the string
    free(str_num);

    return 0;
}
```
## Output:
```bash
12345
```
## File Descriptions:
```markdown

- **libft.h**: Header file containing function declarations and necessary imports.
- **Source files**: The library functions are implemented across multiple source files:
  - String functions: `ft_atoi.c`, `ft_strdup.c`, `ft_strchr.c`, `ft_strjoin.c`, `ft_substr.c`, `ft_strtrim.c`, etc.
  - Memory functions: `ft_bzero.c`, `ft_calloc.c`, `ft_memchr.c`, `ft_memcmp.c`, `ft_memcpy.c`, etc.
  - Character functions: `ft_isalnum.c`, `ft_isalpha.c`, `ft_isdigit.c`, `ft_tolower.c`, `ft_toupper.c`, etc.
  - Output functions: `ft_putchar_fd.c`, `ft_putstr_fd.c`, `ft_putnbr_fd.c`, `ft_putendl_fd.c`.
  - Linked List functions: `ft_lstnew.c`, `ft_lstadd_front.c`, `ft_lstsize.c`, `ft_lstclear.c`, etc.

Each function is implemented in its corresponding file for clarity and modularity.
```
## Explanation
```markdown 
1. **Title and Introduction**:  
   The README starts with a brief description of the libft project, which includes implementing a variety of commonly used functions that will be useful for future C projects.

2. **Features**:  
   Lists the various functions included in the library, categorized into string functions, memory functions, character functions, output functions, and linked list functions.

3. **Installation**:  
   Explains how to clone the project and use it in your own C projects.

4. **Usage**:  
   Provides examples of how to use the libft functions in your own projects.

5. **File Descriptions**:  
   A brief overview of each source file and what function it contains.

6. **License**:  
   You can mention that the project uses the MIT license or another license of your choice.
```


## License
This project is licensed under the MIT License - see the LICENSE file for details.
```markdown

### Key Notes:
- **Explanation Section**: Provides a description of the project and a brief overview of how the library is organized.
- **Usage Example**: Shows how to use functions like `ft_atoi` and `ft_itoa`.
- **File Descriptions**: Details each source file and the function it implements for clarity.
- **Installation Instructions**: Simple steps to clone the project and integrate it into a C project.

This format should work perfectly for your `libft` project and help others (or yourself) understand how to use it efficiently!
```




