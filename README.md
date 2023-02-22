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

## 💡 项目介绍
这不是单纯的libft项目，而是整个项目至今的函数库！！！

libft是42 network的第一个项目，几乎之后的每个项目都需要使用libft作为libc库的代替，其重要性不言而喻。本项目不仅仅只有libft，还包含了若干重构的libc库常用函数，ft_printf函数和get_next_line函数等42项目。

为了之后能更顺畅的使用自建库，该项目会持续更新……

## 🧰 Usage

```SHELL
git clone https://github.com/srall123/libft.git && cd libft && make
```

## 🔍 函数列表
<table>
    <tr>
        <th>Project</th><th>Directory</th><th>Function</th><th>Library</th><th>Description</th>
    </tr>
    <tr>
        <td rowspan="30">libft</td><td rowspan="5">ft_is</td>
		<td>ft_isalnum()</td><td>#inculde &lt;ctype.h&gt;</td><td>Alphanumeric character test</td>
    </tr>
    <tr><td>ft_isalpha()</td><td>#inculde &lt;ctype.h&gt;</td><td>Alphabetic character test</td></tr>
    <tr><td>ft_isascii()</td><td>#inculde &lt;ctype.h&gt;</td><td>Ascii character test</td></tr>
    <tr><td>ft_isdigit()</td><td>#inculde &lt;ctype.h&gt;</td><td>Decimal-digit character test</td></tr>
    <tr><td>ft_isprint()</td><td>#inculde &lt;ctype.h&gt;</td><td>Printable character test</td></tr>
    <tr>
		<td rowspan="9">ft_lst</td><td>ft_lstaddd_back()</td><td> </td><td>Add new element at end of list.</td>
	</tr>
    <tr><td>ft_lstaddd_front()</td><td> </td><td>Add new element at beginning of list.</td></tr>
    <tr><td>ft_lstclear()</td><td> </td><td>Deletes and frees the given node.</td></tr>
    <tr><td>ft_lstdelone()</td><td> </td><td>Delete element from list.</td></tr>
    <tr><td>ft_lstiter()</td><td> </td><td>Iterates the list and applies function on content of each node.</td></tr>
    <tr><td>ft_lstlast()</td><td> </td><td>Returns the last node of the list.</td></tr>
    <tr><td>ft_lstmap()</td><td> </td><td>Iterates and creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.</td></tr>
    <tr><td>ft_lstnew()</td><td> </td><td>Returns a new node.</td></tr>
    <tr><td>ft_lstsize()</td><td> </td><td>Counts the number of nodes in a list.</td></tr>
    <tr>
		<td rowspan="7">ft_mem</td><td>ft_bzero()</td><td>#inculde &lt;string.h&gt;</td><td>Set a block of memory to zero.</td>
	</tr>
    <tr><td>ft_calloc()</td><td>#inculde &lt;stdlib.h&gt;</td><td>Memory allocation.</td></tr>
    <tr><td>ft_memchr()</td><td>#inculde &lt;strings.h&gt;</td><td>Search for first occurrence of a character.</td></tr>
    <tr><td>ft_memcmp()</td><td>#inculde &lt;strings.h&gt;</td><td>Compare two blocks of memory.</td></tr>
    <tr><td>ft_memcpy()</td><td>#inculde &lt;strings.h&gt;</td><td>Copy a block of memory from one location to another.</td></tr>
    <tr><td>ft_memmove()</td><td>#inculde &lt;strings.h&gt;</td><td>Move data from one memory location to another.</td></tr>
    <tr><td>ft_memset()</td><td>#inculde &lt;strings.h&gt;</td><td>Set a block of memory to a specific value.</td></tr>
	

</table>

|	Project	|	Function	|	Library	|	Description	|
|	:------	|	:-------	|	:------	|	:----------	|
|	libft	|	ft_is/ft_isalnum()	|	#inculde <ctype.h>	|	alphanumeric character test	|
|	 	|	ft_is/ft_isalnum()	|	#inculde <ctype.h>	|	alphanumeric character test	|
|	 	|	ft_is/ft_isalnum()	|	#inculde <ctype.h>	|	alphanumeric character test	|
|	 	|	ft_is/ft_isalnum()	|	#inculde <ctype.h>	|	alphanumeric character test	|
|	 	|	ft_is/ft_isalnum()	|	#inculde <ctype.h>	|	alphanumeric character test	|


## 🛡️ Tester
Third party tester to fully test the project, thanks to contributor:
[Tripouille/gnlTester](https://github.com/Tripouille/gnlTester) `git clone https://github.com/Tripouille/gnlTester.git`

<b>The test result of mandatory and bonus:</b>

<img style="vertical-align: top;" decoding="async" src="./ForREADME/test_result.png" width="50%"><img style="vertical-align: top;" decoding="async" src="./ForREADME/test_result_bonus.png" width="50%">

## ✔︎Moulinette
<p align="center">
<img decoding="async" src="./ForREADME/score.png" width="40%">
</p>
