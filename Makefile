NAME = ft_memset.c \
			  ft_bzero.c \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_memchr.c \
			  ft_memcmp.c \
			  ft_strlen.c \
			  ft_strlcpy.c \
			  ft_strlcat.c \
			  ft_strchr.c \
			  ft_strrchr.c \
			  ft_strnstr.c \
			  ft_strncmp.c \
			  ft_atoi.c \
			  ft_isalpha.c \
			  ft_isdigit.c \
			  ft_isalnum.c \
			  ft_isascii.c \
			  ft_isprint.c \
			  ft_toupper.c \
			  ft_tolower.c \
			  ft_calloc.c \
			  ft_strdup.c \
			  ft_substr.c \
			  ft_strjoin.c \
			  ft_strtrim.c \
			  ft_split.c \
			  ft_itoa.c \
			  ft_strmapi.c \
			  ft_striteri.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c

HEADER = libft.h
LIBNAME = libft.a
CC = gcc
CFLAGS = -c -Wall -Werror -Wextra
OBJS = $(NAME:.c=.o)

#rajouter libft.a
all: obj lib clean

obj:
		$(CC) $(CFLAGS) $(NAME) $(HEADER)

lib:
	ar rc $(LIBNAME) $(OBJS) $(HEADER)

#	tester
so:
	gcc -nostartfiles -fPIC $(CFLAGS) $(NAME) 
	gcc -nostartfiles -shared -o libft.so $(OBJS)

clean:
		rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(LIBNAME)

re: fclean all

