SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c
SRCS			+=	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
SRCS			+=	ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c
SRCS			+=	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c
SRCS			+=	ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c
SRCS			+=	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c
SRCS			+=	ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c
SRCS			+=	ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c
SRCS			+=	ft_tolower.c ft_toupper.c

OBJS			= 	$(SRCS:.c=.o)

NAME			=	libft.a

CC				=	clang
AR				=	ar
RM				=	rm -f

CFLAGS			=	-Wall -Wextra -Werror
ARFLAGS 		=	rcs

.c.o:
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(ARFLAGS) $(NAME) $(OBJS)

runw:
		bash warmachine/grademe.sh -u -op2

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re bonus
