# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gusalves <gusalves@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 00:11:59 by gusalves          #+#    #+#              #
#    Updated: 2021/12/09 18:19:55 by gusalves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= so_long

CC	= gcc
CFLAGS	= 
RM	= rm -f

INCLUDES_DIR	= ./includes ./libs/libft
SRC_DIR	= ./src
OBJ_DIR	 = ./build

LIBFT_PATH	 = ./libs/libft
LIBFT	= $(LIBFT_PATH)/libft.a
LIBFT_FLAGS = -L$(LIBFT_PATH) -lft
INCLUDES	= $(addprefix -I,$(INCLUDES_DIR))

SRCS	 = main.c map.c window.c image.c move.c

OBJS	:= $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
SRCS	:= $(addprefix $(SRC_DIR)/,$(SRCS))

all:	$(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCLUDES) $(LIBFT_FLAGS) -lmlx -lXext -lX11

$(LIBFT):
	make -C $(LIBFT_PATH)
	
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@ $(LIBFT_FLAGS) -lmlx -lXext -lX11

clean:
	make clean -C $(LIBFT_PATH)
	$(RM) -r $(OBJ_DIR)

fclean: clean
	make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)

re:	fclean all

go: all
	./so_long

.PHONY:	all clean fclean re