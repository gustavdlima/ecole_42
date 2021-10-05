# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 18:41:56 by gusalves          #+#    #+#              #
#    Updated: 2021/10/02 06:35:55 by gusalves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


LIBFT_SRC = 	./libft

LIBFT	=		$(LIBFT_SRC)/libft.a

NAME	=		libftprintf.a

SRCS	=		ft_printf.c find_type.c cspd%_flags.c main.c

OBJS	=		$(SRCS:.c=.o)

CC		=		clang
AR		=		ar
RM		=		rm -f

CFLAGS	=		-Wall -Wextra -Werror
ARFLAGS =		rcs

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_SRC)

all:			$(LIBFT) $(NAME)

$(NAME):		$(OBJS)
				cp $(LIBFT) $(NAME)
				$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(LIBFT):
				$(MAKE) -C $(LIBFT_SRC)

clean:
				$(MAKE) -C $(LIBFT_SRC) clean
				$(RM) $(NAME)

fclean: 		clean
				$(RM) $(NAME) $(OBJS)

re:				fclean all

exe:
				clear && clang ft_printf.c main.c libftprintf.a && ./a.out

.PHONY:			all clean fclean re libft
