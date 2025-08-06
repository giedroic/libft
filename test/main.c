#include <ctype.h>
#include <stdio.h>
#include "../include/libft.h"

int	main(int argc, char *argv[])
{
	char	c;

	c = argv[1][0];
	argc = (int) argc;
	printf("isalpha: %i ", isalpha(c));
	printf("ft_isalpha: %i\n", ft_isalpha(c));
	printf("isdigit: %i ", isdigit(c));
	printf("ft_isalpha: %i\n", ft_isdigit(c));
	printf("isalnum: %i ", isalnum(c));
	printf("ft_isalnum: %i \n", ft_isalnum(c));
	printf("ft_isascii: %i ", isascii(c));
	printf("isascii: %i\n", ft_isascii(c));
	return (0);
} 
