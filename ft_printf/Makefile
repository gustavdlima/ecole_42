# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gusalves <gusalves@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 02:05:40 by gusalves          #+#    #+#              #
#    Updated: 2021/10/13 22:04:05 by gusalves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

INCLUDES_DIR	= ./includes
SRC_DIR	= ./src
OBJ_DIR	 = ./build

LIBFT_PATH	 = ./libft
LIBFT	= $(LIBFT_PATH)/libft.a
LIBFT_FLAGS	 = -L$(LIBFT_PATH) -lft

INCLUDES	= -I$(INCLUDES_DIR) -I$(LIBFT_PATH)
SRCS	 = csdi_flags.c find_type.c ft_printf.c printf_utils.c \
			 puxX_flags.c
OBJS	:= $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
SRCS	:= $(addprefix $(SRC_DIR)/,$(SRCS))

CC	= clang
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

all:	$(NAME)

$(NAME):	$(LIBFT) $(OBJS)
	cp $(LIBFT) $@
	ar rcs $@ $(OBJS)

$(LIBFT):
	make -C $(LIBFT_PATH)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) $< -c -o $@

clean:
	make clean -C $(LIBFT_PATH)
	$(RM) -r $(OBJ_DIR)

fclean: clean
	make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
