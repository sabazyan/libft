# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabazyan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 19:56:27 by sabazyan          #+#    #+#              #
#    Updated: 2022/04/01 16:37:34 by sabazyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = $(wildcard *.c)
BSRCS = $(wildcard ft_lst*.c)
OBJS = ${SRCS:.c=.o}
BOBJS = ${BSRCS:.c=.o}
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

all: ${NAME} bonus

bonus: ${BOBJS}
	ar rcs ${NAME} $^

${NAME}: ${OBJS}
	ar rcs $@ $^

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}
	${RM} ${BOBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
