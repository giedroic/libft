# Makefile for libft library module #

CC = cc -c -Wall -Wextra -Werror
FT = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
	ft_strlen ft_toupper ft_tolower ft_strchr ft_strrchr \
	ft_strncmp ft_calloc ft_strdup ft_atoi ft_memchr ft_memcmp \
	ft_strnstr ft_memset ft_bzero
	
LIBC = $(addprefix libc/,$(FT))
LIBC :=$(addsuffix .c,$(LIBC))
INCLUDE = $(addprefix include/,$(FT))
INCLUDE := $(addsuffix .h,$(INCLUDE))
OBJECT = $(addsuffix .o,$(FT))
NAME = libft.a

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJECT)
	ar cr $(NAME) $(OBJECT)

$(OBJECT) : $(INCLUDE) include/libft.h
	$(CC) $(LIBC)

clean :
	$(RM) $(OBJECT)

fclean :
	$(RM) $(NAME) $(OBJECT)

re : fclean all
