# Makefile for libft library module #

CC = cc -c -Wall -Wextra -Werror -I include
LIBC = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
	ft_strlen ft_toupper ft_tolower ft_strchr ft_strrchr \
	ft_strncmp ft_calloc ft_strdup ft_atoi ft_memchr ft_memcmp \
	ft_strnstr ft_memset ft_bzero ft_memcpy ft_memmove \
	ft_strlcpy ft_strlcat

ADDITIONAL = ft_substr ft_strjoin ft_strtrim ft_split ft_itoa \
		ft_strmapi ft_striteri ft_putchar_fd ft_putendl_fd \
		ft_putnbr_fd

BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast \
	ft_lstadd_back ft_lstdelone ft_lstclear \
	ft_lstiter ft_lstmap

OBJECT = $(LIBC) $(ADDITIONAL) $(BONUS)
OBJECT := $(addsuffix .o,$(OBJECT))

INCLUDE = $(LIBC) $(ADDITIONAL)
INCLUDE := $(addprefix include/,$(INCLUDE))
INCLUDE := $(addsuffix .h,$(INCLUDE))

LIBC := $(addprefix libc/,$(LIBC))
LIBC := $(addsuffix .c,$(LIBC))

ADDITIONAL := $(addprefix additional/,$(ADDITIONAL))
ADDITIONAL := $(addsuffix .c,$(ADDITIONAL))

BONUS_OBJECT = $(BONUS)
BONUS_OBJECT := $(addsuffix .o,$(BONUS_OBJECT))
BONUS := $(addprefix bonus/,$(BONUS))
BONUS := $(addsuffix .c,$(BONUS))

NAME = libft.a

.PHONY : all clean fclean re bonus

all : $(NAME)

$(NAME) : $(OBJECT)
	ar cr $(NAME) $(OBJECT)

$(OBJECT) : $(LIBC) $(ADDITIONAL) $(INCLUDE) include/libft.h
	$(CC) $(LIBC) $(ADDITIONAL) $(BONUS)

clean :
	$(RM) $(OBJECT) $(BONUS_OBJECT)

fclean :
	$(RM) $(NAME) $(OBJECT) $(BONUS_OBJECT)

bonus :
	$(CC) $(BONUS)
	ar cr $(NAME) $(BONUS_OBJECT)	
re : fclean all
