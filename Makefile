# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmusaely <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/31 16:26:00 by vmusaely          #+#    #+#              #
#    Updated: 2021/07/31 16:26:04 by vmusaely         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex
SRCS = ${shell find "." -name "*.c"}
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: ${NAME}

${NAME}:
	@${CC} ${CFLAGS} -L. -lft ${SRCS} -o ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: clean fclean re all
