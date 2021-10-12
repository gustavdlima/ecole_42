# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 18:41:56 by gusalves          #+#    #+#              #
#    Updated: 2021/10/12 01:12:39 by gusalves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

LIBFT_SRC	=	./libft
LIBFT		=	./libft/libft.a

SRC_DIR		=	./src
HEADER_DIR	=	./header

INCLUDES	=	-I ${HEADER_DIR}

SRCS		=	$(SRC_DIR)/ft_printf.c
SRCS		+=	$(SRC_DIR)/find_type.c
SRCS		+=	$(SRC_DIR)/csdi%_flags.c
SRCS		+=	$(SRC_DIR)/puxX_flags.c
SRCS		+=	$(SRC_DIR)/printf_utils.c
SRCS		+=	$(SRC_DIR)/main.c

OBJS		=	$(SRCS:.c=.o)

CC			=	clang
AR			=	ar
RM			=	rm -f

CFLAGS		=	-Wall -Wextra -Werror
ARFLAGS		=	rcs

all:		$(NAME)

$(NAME):	$(OBJS)
				make -C $(LIBFT_SRC)
				cp $(LIBFT) $(NAME)
				$(AR) $(ARFLAGS) $(NAME) $(OBJS)

.c.o:
			$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

clean:
			$(MAKE) -C $(LIBFT_SRC) clean
				$(RM) $(NAME)

fclean:	clean
				$(RM) $(NAME) $(OBJS)

re:		fclean all

exe:
		clear && clang ./src/ft_printf.c libftprintf.a ./libft/libft.a && ./a.out

.PHONY:	all clean fclean re libft
