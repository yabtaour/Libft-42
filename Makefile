# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabtaour <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 14:44:45 by yabtaour          #+#    #+#              #
#    Updated: 2021/11/14 13:14:48 by yabtaour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS  = ft_isdigit.c ft_memset.c ft_isprint.c ft_strlcat.c\
            ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c\
            ft_toupper.c ft_memchr.c ft_isalnum.c ft_strncmp.c ft_isalpha.c ft_memcpy.c\
			ft_strchr.c ft_strnstr.c ft_isascii.c ft_memmove.c ft_strrchr.c\
            ft_memcpy.c ft_calloc.c ft_strdup.c ft_atoi.c ft_memcmp.c ft_substr.c\
			ft_strjoin.c ft_strtrim.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c\
			ft_putendl_fd.c ft_split.c ft_itoa.c ft_striteri.c ft_strmapi.c

OBJS = ${SRCS:.c=.o}

CC = gcc

FLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	ar rcs    $(NAME)    $(OBJS)

all: ${NAME}

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf ${NAME}

re:    fclean all
