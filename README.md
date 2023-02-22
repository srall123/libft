<h1 align="center">
	📚👨🏻‍💻 <i>42_Cursus: </i>libft_42

</h1>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/srall123/libft?color=lightblue&style=plastic&logo=42" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/srall123/libft?color=green&label=C%20language&logo=42&style=plastic" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/srall123/libft?color=critical&logo=42&style=plastic" />
</p>
<p align="center">
	<a href="./README.md">English &nbsp;&nbsp;</a>
	<a href="./ForREADME/README_CN.md"> 简体中文 &nbsp;&nbsp; </a>
</p><hr>

## 💡 Project
This project is not first project libft. This is the entire library of functions built so far, which includes libft, ft_printf and get_next_line and so on...

To be continue...

## 🧰 Usage
#### 1. Compile the library
```SHELL
git clone https://github.com/srall123/libft.git && cd libft && make
```
#### 2. Add the header files in your code
```C
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"
```
#### 3. Compile with header path
```SHELL
gcc -Werror -Wextra -Wall -I./libft/inc ...
```

## 🔍 Functions list
<table>
    <tr>
        <th>Project</th><th>Directory</th><th>Function</th><th>Prototype Library</th><th>Description</th>
    </tr>
    <tr>
        <td rowspan="39"><b>libft</b></td><td rowspan="5"><b>ft_is</b></td>
		<td><a href="./src/ft_src/ft_isalnum.c">ft_isalnum()</a></td><td>&lt;ctype.h&gt;</td><td>Alphanumeric character test</td>
    </tr>
    <tr><td><a href="./src/ft_src/ft_isalpha.c">ft_isalpha()</a></td><td>&lt;ctype.h&gt;</td><td>Alphabetic character test</td></tr>
    <tr><td><a href="./src/ft_src/ft_isascii.c">ft_isascii()</a></td><td>&lt;ctype.h&gt;</td><td>Ascii character test</td></tr>
    <tr><td><a href="./src/ft_src/ft_isdigit.c">ft_isdigit()</a></td><td>&lt;ctype.h&gt;</td><td>Decimal-digit character test</td></tr>
    <tr><td><a href="./src/ft_src/ft_isprint.c">ft_isprint()</a></td><td>&lt;ctype.h&gt;</td><td>Printable character test</td></tr>
    <tr>
		<td rowspan="9"><b>ft_lst</b></td><td><a href="./src/ft_src/ft_lstaddd_back.c">ft_lstaddd_back()</a></td><td> </td><td>Add new element at end of list.</td>
	</tr>
    <tr><td><a href="./src/ft_src/ft_lstaddd_front.c">ft_lstaddd_front()</a></td><td> </td><td>Add new element at beginning of list.</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstclear.c">ft_lstclear()</a></td><td> </td><td>Deletes and frees the given node.</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstdelone.c">ft_lstdelone()</a></td><td> </td><td>Delete element from list.</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstiter.c">ft_lstiter()</a></td><td> </td><td>Iterates the list and applies function on content of each node.</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstlast.c">ft_lstlast()</a></td><td> </td><td>Returns the last node of the list.</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstmap.c">ft_lstmap()</a></td><td> </td><td>Iterates and creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstnew.c">ft_lstnew()</a></td><td> </td><td>Returns a new node.</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstsize.c">ft_lstsize()</a></td><td> </td><td>Counts the number of nodes in a list.</td></tr>
    <tr>
		<td rowspan="7"><b>ft_mem</b></td><td><a href="./src/ft_src/ft_bzero.c">ft_bzero()</a></td><td>&lt;string.h&gt;</td><td>Set a block of memory to zero.</td>
	</tr>
    <tr><td><a href="./src/ft_src/ft_calloc.c">ft_calloc()</a></td><td>&lt;stdlib.h&gt;</td><td>Memory allocation.</td></tr>
    <tr><td><a href="./src/ft_src/ft_memchr.c">ft_memchr()</a></td><td>&lt;string.h&gt;</td><td>Search for first occurrence of a character.</td></tr>
    <tr><td><a href="./src/ft_src/ft_memcmp.c">ft_memcmp()</a></td><td>&lt;string.h&gt;</td><td>Compare two blocks of memory.</td></tr>
    <tr><td><a href="./src/ft_src/ft_memcpy.c">ft_memcpy()</a></td><td>&lt;string.h&gt;</td><td>Copy a block of memory from one location to another.</td></tr>
    <tr><td><a href="./src/ft_src/ft_memmove.c">ft_memmove()</a></td><td>&lt;string.h&gt;</td><td>Move data from one memory location to another.</td></tr>
    <tr><td><a href="./src/ft_src/ft_memset.c">ft_memset()</a></td><td>&lt;string.h&gt;</td><td>Set a block of memory to a specific value.</td></tr>
    <tr>
		<td rowspan="4"><b>ft_put</b></td><td><a href="./src/ft_src/ft_putchar_fd.c">ft_putchar_fd()</a></td><td> </td><td>output character to fd.</td>
	</tr>
    <tr><td><a href="./src/ft_src/ft_putendl_fd.c">ft_putendl_fd()</a></td><td> </td><td>output character with newline to fd.</td></tr>
    <tr><td><a href="./src/ft_src/ft_putnbr_fd.c">ft_putnbr_fd()</a></td><td> </td><td>output number to fd.</td></tr>
    <tr><td><a href="./src/ft_src/ft_putstr_fd.c">ft_putstr_fd()</a></td><td> </td><td>output string to fd.</td></tr>
    <tr>
		<td rowspan="14"><b>ft_str</b></td><td><a href="./src/ft_src/ft_split.c">ft_split()</a></td><td> </td><td>Split words in a string with given character, return the array of words.</td>
	</tr>
    <tr><td><a href="./src/ft_src/ft_strchr.c">ft_strchr()</a></td><td>&lt;string.h&gt;</td><td>Return the string that starts from the position of the first occurrence character.</td></tr>
    <tr><td><a href="./src/ft_src/ft_strdup.c">ft_strdup()</a></td><td>&lt;string.h&gt;</td><td>Copy a string and return a pointer.</td></tr>
    <tr><td><a href="./src/ft_src/ft_striteri.c">ft_striteri()</a></td><td> </td><td>Iterate through a string and apply a given function to each character, with specify the character's position.</td></tr>
    <tr><td><a href="./src/ft_src/ft_strjoin.c">ft_strjoin()</a></td><td> </td><td>Joint two strings into a new string with malloc.</td></tr>
    <tr><td><a href="./src/ft_src/ft_strlcat.c">ft_strlcat()</a></td><td>&lt;string.h&gt;</td><td>Concatenate strings into the target string with specified length.</td></tr>
    <tr><td><a href="./src/ft_src/ft_strlcpy.c">ft_strlcpy()</a></td><td>&lt;string.h&gt;</td><td>Copy string into another string with specified length, avoid overflow.</td></tr>
    <tr><td><a href="./src/ft_src/ft_strlen.c">ft_strlen()</a></td><td>&lt;string.h&gt;</td><td>Count length of string.</td></tr>
    <tr><td><a href="./src/ft_src/ft_strmapi.c">ft_strmapi()</a></td><td> </td><td>Returns a string which each value has been modified by a given function.</td></tr>
    <tr><td><a href="./src/ft_src/ft_strncmp.c">ft_strncmp()</a></td><td>&lt;string.h&gt;</td><td>Compare the first n characters of two strings.</td></tr>
    <tr><td><a href="./src/ft_src/ft_strnstr.c">ft_strnstr()</a></td><td>&lt;string.h&gt;</td><td>Locate a specified length substring within a string.</td></tr>
    <tr><td><a href="./src/ft_src/ft_strrchr.c">ft_strrchr()</a></td><td>&lt;string.h&gt;</td><td>Return the string that starts from the position of the last occurrence character.</td></tr>
    <tr><td><a href="./src/ft_src/ft_strtrim.c">ft_strtrim()</a></td><td> </td><td> Remove leading and trailing specified characters from a string.</td></tr>
    <tr><td><a href="./src/ft_src/ft_substr.c">ft_substr()</a></td><td> </td><td>Return a substring from the string ’s’ begins at index ’start’ and is of maximum size ’len’.</td></tr>
    <tr>
        <td><b>ft_printf</b></td><td><b>ft_prinf</b></td><td><a href="./src/ft_printf/ft_printf.c">ft_prinf()</a></td><td>&lt;stdio.h&gt;</td><td>See man printf</td>
    </tr>
    <tr>
        <td><b>get_next_line</b></td><td><b>get_next_line</b></td><td><a href="./src/get_next_line/get_next_line_bonus.c">get_next_line()</a></td><td>&lt;stdio.h&gt;</td><td>Return a line from fd.</td>
    </tr>

</table>

## 🛡️ Tester
Third party tester to fully test this library, thanks to contributors:
#### libft
* [Tripouille/libfTester](https://github.com/Tripouille/libftTester) `git clone https://github.com/Tripouille/libftTester.git`
* [ska42/libft-war-machine](https://github.com/ska42/libft-war-machine) `git clone https://github.com/ska42/libft-war-machine.git`
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test) `git clone https://github.com/alelievr/libft-unit-test.git`
#### ft_printf
* [Tripouille/printfTester](https://github.com/Tripouille/printfTester) `git clone https://github.com/Tripouille/printfTester.git`
* [cacharle/ft_printf_test](https://github.com/cacharle/ft_printf_test.git) `git clone https://github.com/cacharle/ft_printf_test.git`
#### get_next_line
* [Tripouille/gnlTester](https://github.com/Tripouille/gnlTester) `git clone https://github.com/Tripouille/gnlTester.git`
