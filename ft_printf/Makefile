# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 18:41:56 by gusalves          #+#    #+#              #
#    Updated: 2021/09/20 15:00:04 by gusalves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_printf.a

SRCS	= ft_printf.c\

OBJS	= $(SOURCES:.c=.o)

CC		= clang
AR		= ar
RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror
ARFLAGS = rcs

.c=.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$NAME:	$(OBJS)
			$(AR) $(ARFLAGS) $(NAME)

runtest:

clean:
			$(RM) $(OBJS)

fclean: clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
