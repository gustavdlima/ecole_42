# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 18:41:56 by gusalves          #+#    #+#              #
#    Updated: 2021/10/11 23:06:19 by gusalves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

LIBFT_SRC	=	./libft

LIBFT		=	$(LIBFT_SRC)/libft.a

SRC_DIR		=	./src

HEADER_DIR	=	./header

INCLUDES	=	-I${HEADER_DIR} -I${LIBFT_SRC}

SRCS		=	$(SOURCE_DIR)/ft_printf.c \
					$(SOURCE_DIR)/find_type.c \
					$(SOURCE_DIR)/csdi%_flags.c \
					$(SOURCE_DIR)/puxX_flags.c \
					$(SOURCE_DIR)/printf_utils.c

OBJS		=	$(SRCS:.c=.o)

CC			=	clang
AR			=	ar
RM			=	rm -f

CFLAGS		=	-Wall -Wextra -Werror
ARFLAGS		=	rcs

all:				$(LIBFT) $(NAME)

$(NAME):			$(OBJS)
						$(AR) $(ARFLAGS) $(NAME) $(SOURCE_DIR)/$(OBJS)
						ranlib $(NAME)

$(LIBFT):
					make -C $(LIBFT_SRC)
						cp $(LIBFT) $(NAME)

$(SOURCE_DIR)/%.o:	$(SOURCE_DIR)/%.c:
						$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
					make -C $(LIBFT_SRC) clean
						$(RM) $(NAME)

fclean:	clean
					$(RM) $(NAME) $(OBJS)

re:	fclean all

.PHONY:	all clean fclean re libft
