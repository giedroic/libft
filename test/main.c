#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "../include/libft.h"

int	main(int argc, char *argv[])
{
	char	c;
	
	c = argv[2][0];
	argc = (int) argc;
	/*printf("isalpha: %i ", isalpha(c));
	printf("ft_isalpha: %i\n", ft_isalpha(c));
	printf("isdigit: %i ", isdigit(c));
	printf("ft_isalpha: %i\n", ft_isdigit(c));
	printf("isalnum: %i ", isalnum(c));
	printf("ft_isalnum: %i \n", ft_isalnum(c));
	printf("ft_isascii: %i ", isascii(c));
	printf("isascii: %i\n", ft_isascii(c));
	printf("isprint: %i ", isprint(c));
	printf("ft_isprint: %i\n", ft_isprint(c));
	printf("strlen: %lu ", strlen(argv[1]));
	printf("ft_strlen: %lu \n", ft_strlen(argv[1]));
	printf("toupper: %c ", toupper(c));
	printf("ft_toupper: %c\n", ft_toupper(c));
	printf("tolower: %c ", tolower(c));
	printf("ft_tolower: %c\n", ft_tolower(c));*/
	printf("strchr: %s ", strchr(argv[1], c));
	printf("ft_strchr: %s\n", ft_strchr(argv[1], c));
	printf("strrchr: %s ", strrchr(argv[1], c));
	printf("ft_strrchr: %s\n", ft_strrchr(argv[1], c));
	return (0);
} 
