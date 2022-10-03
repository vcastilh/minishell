# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 19:44:22 by coder             #+#    #+#              #
#    Updated: 2022/10/03 20:01:42 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#ifndef MINISHELL_H
# define MINISHELL_H

OBJS= ${SRCS:%.c=%.o}	
CC= gcc
CFLAGS= -Wall -Wextra -Werror
SRCS= main.c\

NAME = minishell

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm -f 
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
#endif
