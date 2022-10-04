# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 19:44:22 by coder             #+#    #+#              #
#    Updated: 2022/10/04 00:46:48 by guribeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= gcc
CFLAGS= -Wall -Wextra -Werror
SRCS= prompt.c
OBJS= ${SRCS:%.c=$(PATH_OBJS)%.o}	
PATH_SRCS = ./sources/
PATH_OBJS = ./objects/

NAME = minishell

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -lreadline -o $(NAME)

$(PATH_OBJS)%.o: $(PATH_SRCS)%.c
	mkdir -p $(PATH_OBJS)
	cc $(FLAGS) -I ./include/ -c $< -o $@
	
clean:
	rm -rf $(PATH_OBJS) 
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
