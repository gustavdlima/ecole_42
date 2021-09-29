# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 18:41:56 by gusalves          #+#    #+#              #
#    Updated: 2021/09/29 11:07:03 by gusalves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


LIBFT	= $(LIBFT_SRC)/libft.a

NAME	= ft_printf.a

SRCS	= ft_printf.c search_type.c

OBJS	= $(SRCS:.c=.o)

CC		= clang
AR		= ar
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror
ARFLAGS = rcs

.c=.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_SRC)

all:	$(LIBFT) $(NAME)

$NAME:	$(OBJS)
			cp $(LIBFT) $(NAME) 
			$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$LIBFT:
		$(MAKE) -C $(LIBFT_SRC)

clean:
			$(MAKE) -C $(LIBFT_SRC) clean
			$(RM) $(NAME)

fclean: clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re libft
