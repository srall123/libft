# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srall <srall@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 12:23:45 by lliu              #+#    #+#              #
#    Updated: 2023/02/21 23:30:42 by srall            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#libft source files
LIBFTIS_SRC =	ft_isalnum.c			\
				ft_isalpha.c			\
				ft_isascii.c			\
				ft_isdigit.c			\
				ft_isprint.c

LIBFTLST_SRC =	ft_lstadd_back.c		\
				ft_lstadd_front.c		\
				ft_lstclear.c			\
				ft_lstdelone.c			\
				ft_lstiter.c			\
				ft_lstlast.c			\
				ft_lstmap.c			\
				ft_lstnew.c			\
				ft_lstsize.c

LIBFTMEM_SRC =	ft_bzero.c			\
				ft_calloc.c			\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_memcpy.c			\
				ft_memmove.c		\
				ft_memset.c

LIBFTPUT_SRC =	ft_putchar_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\
				ft_putstr_fd.c

LIBFTSTR_SRC =	ft_split.c			\
				ft_strchr.c			\
				ft_strdup.c			\
				ft_striteri.c		\
				ft_strjoin.c		\
				ft_strlcat.c		\
				ft_strlcpy.c		\
				ft_strlen.c			\
				ft_strmapi.c		\
				ft_strncmp.c		\
				ft_strnstr.c		\
				ft_strrchr.c		\
				ft_strtrim.c		\
				ft_substr.c			\

LIBFTTO_SRC =	ft_atoi.c			\
				ft_itoa.c			\
				ft_tolower.c		\
				ft_toupper.c

# get_net_line
GNL_SRC =		get_next_line_bonus.c			\
				get_next_line_utils_bonus.c

# ft_printf
FTPRINTF_SRC =	ft_printf_csdiu%.c				\
				ft_printf_libft.c				\
				ft_printf_pxX.c					\
				ft_printf.c

## 将不同来源的SRC更改后缀添加前缀后加入SRC的目标中
SRC +=	$(addprefix libft/ft_is/, $(LIBFTIS_SRC))
SRC +=	$(addprefix libft/ft_lst/, $(LIBFTLST_SRC))
SRC +=	$(addprefix libft/ft_mem/, $(LIBFTMEM_SRC))
SRC +=	$(addprefix libft/ft_put/, $(LIBFTPUT_SRC))
SRC +=	$(addprefix libft/ft_str/, $(LIBFTSTR_SRC))
SRC +=	$(addprefix libft/ft_to/, $(LIBFTTO_SRC))
SRC +=	$(addprefix get_next_line/, $(GNL_SRC))
SRC +=	$(addprefix ft_printf/, $(FTPRINTF_SRC))
## 指定位置上生成obj文件
OBJ_DIR		=	obj
OBJ += $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
## 显式逐个生成目标文件
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -I./include -c
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)/libft/ft_is
	@mkdir -p $(OBJ_DIR)/libft/ft_lst
	@mkdir -p $(OBJ_DIR)/libft/ft_mem
	@mkdir -p $(OBJ_DIR)/libft/ft_put
	@mkdir -p $(OBJ_DIR)/libft/ft_str
	@mkdir -p $(OBJ_DIR)/libft/ft_to
	@mkdir -p $(OBJ_DIR)/get_next_line
	@mkdir -p $(OBJ_DIR)/ft_printf
	@$(CC) $(CFLAGS) $< -o $@

NAME 		=	libft.a

# colors
DEF_COLOR	=	\033[0;39m
ORANGE		=	\033[0;33m
GRAY		=	\033[0;90m
RED			=	\033[0;91m
GREEN		=	\033[1;92m
YELLOW		=	\033[1;93m
BLUE		=	\033[0;94m
MAGENTA		=	\033[0;95m
CYAN		=	\033[0;96m
WHITE		=	\033[0;97m
# output information
ECHO		= echo

all: $(NAME)
$(NAME):	$(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@$(ECHO) "$(YELLOW)[libft]:\t$(DEF_COLOR) $(GREEN) => Success!$(DEF_COLOR)"
	@$(ECHO) "$(YELLOW)[ft_printf]:\t$(DEF_COLOR) $(GREEN) => Success!$(DEF_COLOR)"
	@$(ECHO) "$(YELLOW)[get_next_line]:$(DEF_COLOR) $(GREEN) => Success!$(DEF_COLOR)"

clean:
	@rm -rf $(OBJ_DIR)
	@rm -f $(OBJ) $(OBJ_BONUS)
	@$(ECHO) "$(BLUE)[libft]:\t\tobject files$(DEF_COLOR)$(GREEN) => Cleaned!$(DEF_COLOR)"
	@$(ECHO) "$(BLUE)[ft_printf]:\t\tobject files$(DEF_COLOR)$(GREEN) => Cleaned!$(DEF_COLOR)"
	@$(ECHO) "$(BLUE)[get_next_line]:\tobject files$(DEF_COLOR)$(GREEN) => Cleaned!$(DEF_COLOR)"

fclean: clean
	@rm -f $(NAME)
	@$(ECHO) "$(CYAN)[libft.a]:\t\ttarget files$(DEF_COLOR)$(GREEN) => Cleaned!$(DEF_COLOR)"

norm:
	@norminette $(SRC) ./include | grep -v Norme -B1 || true

re:	fclean all bonus

.PHONY : all clean fclean bonus re
