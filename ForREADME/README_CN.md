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

## 🧰 使用方法
#### 1. 编译函数库
```SHELL
git clone https://github.com/srall123/libft.git && cd libft && make
```
#### 2. 代码中添加头文件
```C
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"
```
#### 3. 头文件路径编译代码
```SHELL
gcc -Werror -Wextra -Wall -I./libft/inc ...
```

## 🔍 函数列表
<table>
    <tr>
        <th>项目</th><th>目录</th><th>函数</th><th>原型库</th><th>描述</th>
    </tr>
    <tr>
        <td rowspan="39"><b>libft</b></td><td rowspan="5"><b>ft_is</b></td>
		<td><a href="./src/ft_src/ft_isalnum.c">ft_isalnum()</a></td><td>&lt;ctype.h&gt;</td><td>判断字母数字</td>
    </tr>
    <tr><td><a href="./src/ft_src/ft_isalpha.c">ft_isalpha()</a></td><td>&lt;ctype.h&gt;</td><td>判断字母</td></tr>
    <tr><td><a href="./src/ft_src/ft_isascii.c">ft_isascii()</a></td><td>&lt;ctype.h&gt;</td><td>判断ascii</td></tr>
    <tr><td><a href="./src/ft_src/ft_isdigit.c">ft_isdigit()</a></td><td>&lt;ctype.h&gt;</td><td>判断数字</td></tr>
    <tr><td><a href="./src/ft_src/ft_isprint.c">ft_isprint()</a></td><td>&lt;ctype.h&gt;</td><td>判断是否可打印</td></tr>
    <tr>
		<td rowspan="9"><b>ft_lst</b></td><td><a href="./src/ft_src/ft_lstaddd_back.c">ft_lstaddd_back()</a></td><td> </td><td>插入链表末尾</td>
	</tr>
    <tr><td><a href="./src/ft_src/ft_lstaddd_front.c">ft_lstaddd_front()</a></td><td> </td><td>插入链表头</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstclear.c">ft_lstclear()</a></td><td> </td><td>删除并释放链表</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstdelone.c">ft_lstdelone()</a></td><td> </td><td>删除某个元素，但不释放</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstiter.c">ft_lstiter()</a></td><td> </td><td>遍历链表</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstlast.c">ft_lstlast()</a></td><td> </td><td>返回链表最后一个节点</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstmap.c">ft_lstmap()</a></td><td> </td><td>遍历链表，并将f函数作用于每个元素或删除元素后创建新链表</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstnew.c">ft_lstnew()</a></td><td> </td><td>创建链表新节点</td></tr>
    <tr><td><a href="./src/ft_src/ft_lstsize.c">ft_lstsize()</a></td><td> </td><td>获取链表尺寸</td></tr>
    <tr>
		<td rowspan="7"><b>ft_mem</b></td><td><a href="./src/ft_src/ft_bzero.c">ft_bzero()</a></td><td>&lt;string.h&gt;</td><td>初始化内存</td>
	</tr>
    <tr><td><a href="./src/ft_src/ft_calloc.c">ft_calloc()</a></td><td>&lt;stdlib.h&gt;</td><td>分配内存</td></tr>
    <tr><td><a href="./src/ft_src/ft_memchr.c">ft_memchr()</a></td><td>&lt;string.h&gt;</td><td>查找内存块中第一次出现的指定字符</td></tr>
    <tr><td><a href="./src/ft_src/ft_memcmp.c">ft_memcmp()</a></td><td>&lt;string.h&gt;</td><td>比较两个内存块</td></tr>
    <tr><td><a href="./src/ft_src/ft_memcpy.c">ft_memcpy()</a></td><td>&lt;string.h&gt;</td><td>分配并拷贝一个内存块</td></tr>
    <tr><td><a href="./src/ft_src/ft_memmove.c">ft_memmove()</a></td><td>&lt;string.h&gt;</td><td>移动内存块中数据</td></tr>
    <tr><td><a href="./src/ft_src/ft_memset.c">ft_memset()</a></td><td>&lt;string.h&gt;</td><td>设置内存的值</td></tr>
    <tr>
		<td rowspan="4"><b>ft_put</b></td><td><a href="./src/ft_src/ft_putchar_fd.c">ft_putchar_fd()</a></td><td> </td><td>向fd中打印字符</td>
	</tr>
    <tr><td><a href="./src/ft_src/ft_putendl_fd.c">ft_putendl_fd()</a></td><td> </td><td>向fd中打印字符和换行</td></tr>
    <tr><td><a href="./src/ft_src/ft_putnbr_fd.c">ft_putnbr_fd()</a></td><td> </td><td>向fd中打印数字</td></tr>
    <tr><td><a href="./src/ft_src/ft_putstr_fd.c">ft_putstr_fd()</a></td><td> </td><td>向fd中打印字符串</td></tr>
    <tr>
		<td rowspan="14"><b>ft_str</b></td><td><a href="./src/ft_src/ft_split.c">ft_split()</a></td><td> </td><td>字符串中拆分单词，返回储存有单词的二维数组</td>
	</tr>
    <tr><td><a href="./src/ft_src/ft_strchr.c">ft_strchr()</a></td><td>&lt;string.h&gt;</td><td>返回字符串中第一次出现字符的位置</td></tr>
    <tr><td><a href="./src/ft_src/ft_strdup.c">ft_strdup()</a></td><td>&lt;string.h&gt;</td><td>返回拷贝后的字符串地址</td></tr>
    <tr><td><a href="./src/ft_src/ft_striteri.c">ft_striteri()</a></td><td> </td><td>遍历字符串，并将f函数作用于指定位置开始的每个元素</td></tr>
    <tr><td><a href="./src/ft_src/ft_strjoin.c">ft_strjoin()</a></td><td> </td><td>连接两个字符串，并返回新串</td></tr>
    <tr><td><a href="./src/ft_src/ft_strlcat.c">ft_strlcat()</a></td><td>&lt;string.h&gt;</td><td>连接指定长度的字符串</td></tr>
    <tr><td><a href="./src/ft_src/ft_strlcpy.c">ft_strlcpy()</a></td><td>&lt;string.h&gt;</td><td>为防止溢出，拷贝指定长度字符串</td></tr>
    <tr><td><a href="./src/ft_src/ft_strlen.c">ft_strlen()</a></td><td>&lt;string.h&gt;</td><td>字符串长度</td></tr>
    <tr><td><a href="./src/ft_src/ft_strmapi.c">ft_strmapi()</a></td><td> </td><td>返回被f函数修改的每个元素的字符串</td></tr>
    <tr><td><a href="./src/ft_src/ft_strncmp.c">ft_strncmp()</a></td><td>&lt;string.h&gt;</td><td>比较两个字符串开始的n个字符</td></tr>
    <tr><td><a href="./src/ft_src/ft_strnstr.c">ft_strnstr()</a></td><td>&lt;string.h&gt;</td><td>查找子串，返回第一次子串出现的位置</td></tr>
    <tr><td><a href="./src/ft_src/ft_strrchr.c">ft_strrchr()</a></td><td>&lt;string.h&gt;</td><td>返回最后一次出现的字符位置</td></tr>
    <tr><td><a href="./src/ft_src/ft_strtrim.c">ft_strtrim()</a></td><td> </td><td> 删除字符串前后的指定字符</td></tr>
    <tr><td><a href="./src/ft_src/ft_substr.c">ft_substr()</a></td><td> </td><td>返回字符串指定位置和长度的子串</td></tr>
    <tr>
        <td><b>ft_printf</b></td><td><b>ft_prinf</b></td><td><a href="./src/ft_printf/ft_printf.c">ft_prinf()</a></td><td>&lt;stdio.h&gt;</td><td>参看printf</td>
    </tr>
    <tr>
        <td><b>get_next_line</b></td><td><b>get_next_line</b></td><td><a href="./src/get_next_line/get_next_line_bonus.c">get_next_line()</a></td><td>&lt;stdio.h&gt;</td><td>返回fd文件的一行内容</td>
    </tr>

</table>

## 🛡️ 测试
使用以下测试函数库，感谢作者们：
#### libft
* [Tripouille/libfTester](https://github.com/Tripouille/libftTester) `git clone https://github.com/Tripouille/libftTester.git`
* [ska42/libft-war-machine](https://github.com/ska42/libft-war-machine) `git clone https://github.com/ska42/libft-war-machine.git`
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test) `git clone https://github.com/alelievr/libft-unit-test.git`
#### ft_printf
* [Tripouille/printfTester](https://github.com/Tripouille/printfTester) `git clone https://github.com/Tripouille/printfTester.git`
* [cacharle/ft_printf_test](https://github.com/cacharle/ft_printf_test.git) `git clone https://github.com/cacharle/ft_printf_test.git`
#### get_next_line
* [Tripouille/gnlTester](https://github.com/Tripouille/gnlTester) `git clone https://github.com/Tripouille/gnlTester.git`
