# Makefile for libft library module #

CC = cc -c -Wall -Wextra -Werror
FT = ft_isalpha ft_isdigit
LIBC = $(addprefix libc/,$(FT))
LIBC :=$(addsuffix .c,$(LIBC))
INCLUDE = $(addprefix include/,$(FT))
INCLUDE := $(addsuffix .h,$(INCLUDE))
OBJECT = $(addsuffix .o,$(FT))
NAME = libft.a

.PHONY : clean

all: $(NAME)

$(NAME) : $(OBJECT)
	ar cr $(NAME) $(OBJECT)

$(OBJECT) : $(INCLUDE) include/libft.h
	$(CC) $(LIBC)

clean :
	rm $(NAME) $(OBJECT)
