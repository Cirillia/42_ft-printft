# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruwang <ruwang@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/14 19:12:31 by ruwang            #+#    #+#              #
#    Updated: 2024/07/17 17:27:26 by ruwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 

OBJS = $(SRCS:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

%.o:	%.c

	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $@ $^

all:	$(NAME)

bonus:  $(NAME)

clean:
	$(RM) $(OBJS)

fclean:     clean
	$(RM) $(NAME)

re:         fclean all

.PHONY:     all bonus clean fclean re

