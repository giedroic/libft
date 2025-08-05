# Makefile for libft library module #

CC = cc -c -Wall -Wextra -Werror
FT = ft_isalpha ft_isdigit
LIBC = $(addprefix libc/,$(FT))
LIBC :=$(addsuffix .c,$(LIBC))
INCLUDE = $(addprefix include/,$(FT))
INCLUDE := $(addsuffix .h,$(INCLUDE))
OBJECT = $(addsuffix .o,$(FT))

$(OBJECT) : $(INCLUDE) include/libft.h
	$(CC) $(LIBC)
