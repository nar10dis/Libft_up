# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nadeluge <nadeluge@student42.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 14:10:28 by nadeluge          #+#    #+#              #
#    Updated: 2024/12/16 18:50:59 by nadeluge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_putnbr_fd.c \
	ft_putendl_fd.c \
	ft_putstr_fd.c \
	ft_putchar_fd.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_itoa.c \
	ft_split.c \
	ft_strtrim.c \
	ft_strjoin.c \
	ft_substr.c \
	ft_memset.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_atoi.c \
	ft_strnstr.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_strncmp.c \
	ft_strrchr.c \
	ft_strchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_memmove.c \
	ft_memcpy.c \
	ft_bzero.c \
	ft_strlen.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_printf.c \
	get_next_line.c \
	ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)

NAME = libft.a

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): %.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
