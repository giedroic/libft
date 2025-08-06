# Makefile for libft library module #

CC = cc -c -Wall -Wextra -Werror
FT = ft_isalpha ft_isdigit
LIBC = $(addprefix libc/,$(FT))
LIBC :=$(addsuffix .c,$(LIBC))
INCLUDE = $(addprefix include/,$(FT))
INCLUDE := $(addsuffix .h,$(INCLUDE))
OBJECT = $(addsuffix .o,$(FT))
.PHONY: clean

libft.a : $(OBJECT)
	ar cr libft.a $(OBJECT)

$(OBJECT) : $(INCLUDE) include/libft.h
	$(CC) $(LIBC)

clean :
	rm libft.a $(OBJECT)
