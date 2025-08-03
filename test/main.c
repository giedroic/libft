#include <ctype.h>
#include <stdio.h>
#include "../include/libft.h"

int	main(int argc, char *argv[])
{
	char	c;

	c = argv[1][0];
	argc = (int) argc;
	printf("isalpha: %i\n", isalpha(c));
	printf("ft_isalpha: %i\n", ft_isalpha(c));
	return (0);
} 
