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

FT_PRINTF = ft_printf ft_printf_utils

GET_NEXT_LINE = get_next_line

OBJECT = $(LIBC) $(ADDITIONAL) $(BONUS) $(FT_PRINTF) $(GET_NEXT_LINE)
OBJECT := $(addprefix obj/,$(OBJECT))
OBJECT := $(addsuffix .o,$(OBJECT))

LIBC := $(addprefix libc/,$(LIBC))

ADDITIONAL := $(addprefix additional/,$(ADDITIONAL))

BONUS_OBJECT = $(BONUS)
BONUS_OBJECT := $(addsuffix .o,$(BONUS_OBJECT))
BONUS := $(addprefix bonus/,$(BONUS))

FT_PRINTF := $(addprefix ft_printf/,$(FT_PRINTF))

GET_NEXT_LINE := $(addprefix get_next_line/,$(GET_NEXT_LINE))

NAME = libft.a

.PHONY : all clean fclean re bonus

all : $(NAME)

$(NAME) : $(OBJECT)
	ar cr $(NAME) $(OBJECT)

obj/%.o : src/%.c
	$(CC) $< -o $@

clean :
	$(RM) $(OBJECT) $(BONUS_OBJECT)

fclean :
	$(RM) $(NAME) $(OBJECT) $(BONUS_OBJECT)

bonus :
	$(CC) $(BONUS)
	ar cr $(NAME) $(BONUS_OBJECT)	

re : fclean all
