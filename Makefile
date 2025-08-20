# Makefile for libft library module #

CC = cc -c -Wall -Wextra -Werror

LIBC = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
	ft_strlen ft_toupper ft_tolower ft_strchr ft_strrchr \
	ft_strncmp ft_calloc ft_strdup ft_atoi ft_memchr ft_memcmp \
	ft_strnstr ft_memset ft_bzero ft_memcpy ft_memmove \
	ft_strlcpy ft_strlcat

ADDITIONAL = ft_substr ft_strjoin ft_strtrim ft_split ft_itoa

OBJECT = $(LIBC) $(ADDITIONAL)
OBJECT := $(addsuffix .o,$(OBJECT))

INCLUDE = $(LIBC) $(ADDITIONAL)
INCLUDE := $(addprefix include/,$(INCLUDE))
INCLUDE := $(addsuffix .h,$(INCLUDE))

LIBC := $(addprefix libc/,$(LIBC))
LIBC := $(addsuffix .c,$(LIBC))

ADDITIONAL := $(addprefix additional/,$(ADDITIONAL))
ADDITIONAL := $(addsuffix .c,$(ADDITIONAL))

NAME = libft.a

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJECT)
	ar cr $(NAME) $(OBJECT)

$(OBJECT) : $(INCLUDE) include/libft.h
	$(CC) $(LIBC) $(ADDITIONAL)

clean :
	$(RM) $(OBJECT)

fclean :
	$(RM) $(NAME) $(OBJECT)

re : fclean all
