# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ammustaf <ammustaf@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 19:20:24 by ammustaf          #+#    #+#              #
#    Updated: 2022/09/22 19:20:27 by ammustaf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

MAINFILES = ft_bzero.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_strdup.c\
	ft_atoi.c\
	ft_isdigit.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_isalpha.c\
	ft_isalnum.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strnstr.c\
	ft_strlcat.c\
	ft_memset.c\
	ft_memcpy.c\
	ft_memcmp.c\
	ft_memmove.c\
	ft_memchr.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putnbr_fd.c\
	ft_putendl_fd.c\
	ft_strtrim.c\
	ft_striteri.c\
	ft_strmapi.c\
	ft_strjoin.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_itoa.c\
	ft_split.c\

OBJS = $(MAINFILES: .c = .o)

FLAGS = -Wall -Wextra -Werror

CC = gcc

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	   $(CC) $@ $^

%.o:%.c
			$(CC) $(FLAGS) -c -o $@ $^

clean:
			rm -rf $(OBJS) $(NAME)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

