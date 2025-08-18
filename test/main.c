#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "../include/libft.h"

int	main(int argc, char *argv[])
{
	char	*array_1;
	char	*array_2;
	char	*ft_array_1;
	char	*ft_array_2;
	char	*array;
	char	*ft_array;
	int		n;
	int		i;
	/*int	size;
	char	c
	
	c = argv[2][0];
	argc = (int) argc;
	printf("isalpha: %i ", isalpha(c));
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
	printf("ft_tolower: %c\n", ft_tolower(c));
	printf("strchr: %s ", strchr(argv[1], c));
	printf("ft_strchr: %s\n", ft_strchr(argv[1], c));
	printf("strrchr: %s ", strrchr(argv[1], c));
	printf("ft_strrchr: %s\n", ft_strrchr(argv[1], c));
	printf("strncmp: %i ", strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("ft_strncmp %i\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	array = calloc(2, 2 * sizeof(int));
	printf("calloc: %i %i ", array[0], array[1]); 
	free(array);
	ft_array = ft_calloc(2, sizeof(int));
	printf("ft_calloc: %i %i\n", ft_array[0], ft_array[1]);
	free(ft_array);
	array = strdup(NULL);
	printf("strdup: %s ", array);
	free(array);
	ft_array = ft_strdup(NULL);
	printf("ft_strdup %s\n", ft_array);	
	free(ft_array);
	printf("atoi: %i ", atoi(argv[1]));
	printf("ft_atoi: %i\n", ft_atoi(argv[1]));
	array = strdup(argv[1]);
	printf("memchr: %s ", (char *) memchr(array, argv[2][0], strlen(array)));
	printf("ft_memchr: %s\n", (char *) ft_memchr(array, argv[2][0], strlen(array)));
	array_1 = ft_strdup(argv[1]);
	array_2 = ft_strdup(argv[2]);	
	printf("memcmp: %i ", memcmp(array_1, array_2, ft_atoi(argv[3])));
	printf("ft_memcmp: %i\n", ft_memcmp(array_1, array_2, ft_atoi(argv[3])));
	free(array_1);
	free(array_2);
	printf("strnstr: %s ", strnstr(argv[1], argv[2], atoi(argv[3])));
	printf("ft_strnstr: %s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	array = malloc(sizeof(char) * ft_atoi(argv[3]));
	memset(array, argv[1][0], ft_atoi(argv[2]));
	printf("memset: %s ", array);
	free(array);
	ft_array = malloc(sizeof(char) * ft_atoi(argv[3]));
	ft_memset(ft_array, argv[1][0], ft_atoi(argv[2]));
	printf("ft_memset: %s\n", ft_array);
	free(ft_array);
	array = strdup(argv[1]);
	n = strlen(argv[1]);
	bzero(array, atoi(argv[2]));	
	ft_array = ft_strdup(argv[1]);
	ft_bzero(ft_array, ft_atoi(argv[2]));
	i = 0;
	printf("bzero: ");
	while (i < n)
	{
		if (array[i] == 0)
			printf("0");
		else
			printf("%c", array[i]);		
		++i;
	}
	i = 0;
	printf(" ft_bzero: ");	
	free(array);
	while (i < n)
	{
		if (ft_array[i] == 0)
			printf("0");
		else
			printf("%c", ft_array[i]);		
		++i;
	}
	printf("\n");
	free(ft_array);
	array_1 = malloc(sizeof(char) * atoi(argv[1]));
	array_2 = strdup(argv[2]);
	printf("memcpy: %s %s ", (char *) memcpy(array_1, array_2, atoi(argv[3])), array_1);
	free(array_1);
	free(array_2);
	ft_array_1 = malloc(sizeof(char) * ft_atoi(argv[1]));
	ft_array_2 = ft_strdup(argv[2]);
	printf("ft_memcpy: %s %s\n", (char *) ft_memcpy(ft_array_1, ft_array_2, ft_atoi(argv[3])), ft_array_1);
	free(ft_array_1);
	free(ft_array_2);*/

	array_1 = malloc(sizeof(char) * atoi(argv[1]));
	array_2 = strdup(argv[2]);
	printf("strlcpy: %lu %s ", strlcpy(array_1, array_2, atoi(argv[3])), array_1);
	free(array_1);
	free(array_2);
	ft_array_1 = malloc(sizeof(char) * ft_atoi(argv[1]));
	ft_array_2 = ft_strdup(argv[2]);
	printf("ft_strlcpy: %lu %s\n", ft_strlcpy(ft_array_1, ft_array_2, ft_atoi(argv[3])), ft_array_1);
	free(ft_array_1);
	free(ft_array_2);
	return (0);
} 
