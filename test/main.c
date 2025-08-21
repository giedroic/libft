#include <ctype.h>
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <stddef.h>
#include "../include/libft.h"

/*
char	encrypt(unsigned int offset, char c)
{
	if (c == 0)
		return (0);
	offset = offset % 255 + 1;
	c += offset;
	if (c == 0)
		c = offset;
	return (c);
}

char	decrypt(unsigned int offset, char c)
{
	if (c == 0)
		return (0);
	offset = offset % 255 + 1;
	c -= offset;
	if (c == 0)
		c = offset;
	return (c);
}

void	encrypt_(unsigned int offset, char *c)
{
	if (*c == 0)
		return ;
	offset = offset % 255 + 1;
	*c += offset;
	if (*c == 0)
		*c = offset;
}

void	decrypt_(unsigned int offset, char *c)
{
	if (*c == 0)
		return ;
	offset = offset % 255 + 1;
	*c -= offset;
	if (*c == 0)
		*c = offset;
}
*/

int	main(int argc, char *argv[])
{
	char	*array_1;
	char	*array_2;
	char	*ft_array_1;
	char	*ft_array_2;
	char	*array;
	char	*ft_array;
	char	*substring;
	char	**array_of_strings;
	t_list	*list;
	t_list	*new_node;
	int		n;
	int		i;
	int		size;
	char		c;
/*	
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

	printf("isprint: %i ", isprint(c));
	printf("ft_isprint: %i\n", ft_isprint(c));

	printf("strlen: %lu ", strlen(argv[1]));
	printf("ft_strlen: %lu \n", ft_strlen(argv[1]));

	printf("toupper: %c ", toupper(c));
	printf("ft_toupper: %c\n", ft_toupper(c));

	printf("tolower: %c ", tolower(c));
	printf("ft_tolower: %c\n", ft_tolower(c));

	printf("strchr: %s ", strchr(argv[1], argv[2][0]));
	printf("ft_strchr: %s\n", ft_strchr(argv[1], argv[2][0]));

	printf("strrchr: %s ", strrchr(argv[1], argv[2][0]));
	printf("ft_strrchr: %s\n", ft_strrchr(argv[1], argv[2][0]));

	printf("strncmp: %i ", strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("ft_strncmp %i\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));

	array = calloc(2, 2 * sizeof(int));
	printf("calloc: %i %i ", array[0], array[1]); 
	free(array);
	ft_array = ft_calloc(2, sizeof(int));
	printf("ft_calloc: %i %i\n", ft_array[0], ft_array[1]);
	free(ft_array);

	array = strdup(argv[1]);
	printf("strdup: %s ", array);
	free(array);
	ft_array = ft_strdup(argv[1]);
	printf("ft_strdup %s\n", ft_array);	
	free(ft_array);

	printf("atoi: %i ", atoi(NULL));
	printf("ft_atoi: %i\n", ft_atoi(argv[1]));

	array = strdup(argv[1]);
	printf("memchr: %s ", (char *) memchr(NULL, argv[2][0], strlen(array)));
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
	ft_memset(array, argv[1][0], ft_atoi(argv[2]));
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
	free(ft_array_2);

	array_1 = malloc(sizeof(char) * atoi(argv[1]));
	array_2 = strdup(argv[2]);
	printf("memmove: %s %s ", (char *) memmove(array_2 + atoi(argv[3]), array_2 + atoi(argv[4]), atoi(argv[5])), array_1);
	free(array_1);
	free(array_2);
	ft_array_1 = malloc(sizeof(char) * ft_atoi(argv[1]));
	ft_array_2 = ft_strdup(argv[2]);
	printf("ft_memmove: %s %s\n", (char *) ft_memmove(ft_array_2 + atoi(argv[3]), ft_array_2 + atoi(argv[4]), ft_atoi(argv[5])), ft_array_1);
	free(ft_array_1);
	free(ft_array_2);

	array_1 = malloc(sizeof(char) * atoi(argv[1]));
	array_2 = strdup(argv[2]);
	printf("strlcpy: %lu %s ", strlcpy(argv[1], argv[2], atoi(argv[3])), array_1);
	free(array_1);
	free(array_2);
	ft_array_1 = malloc(sizeof(char) * ft_atoi(argv[1]));
	ft_array_2 = ft_strdup(argv[2]);
	printf("ft_strlcpy: %lu %s\n", ft_strlcpy(ft_array_1, ft_array_2, ft_atoi(argv[3])), ft_array_1);
	free(ft_array_1);
	free(ft_array_2);

	array_1 = malloc(sizeof(char) * atoi(argv[1]));
	strcpy(array_1, argv[2]);
	array_2 = strdup(argv[3]);
	printf("strlcat: %lu %s ", strlcat(array_1, array_2, atoi(argv[4])), array_1);
	free(array_1);
	free(array_2);
	ft_array_1 = malloc(sizeof(char) * ft_atoi(argv[1]));
	strcpy(ft_array_1, argv[2]);
	ft_array_2 = ft_strdup(argv[3]);
	printf("ft_strlcat: %lu %s\n", ft_strlcat(ft_array_1, ft_array_2, ft_atoi(argv[4])), ft_array_1);
	free(ft_array_1);
	free(ft_array_2);

	substring = ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3]));
	printf("ft_substr: %s\n", substring);

	array_1 = ft_strdup(argv[1]);
	array_2 = ft_strdup(argv[2]);
	array = ft_strjoin(array_1, array_2);	
	printf("ft_strjoin: %s\n", array);
	free(array_1);
	free(array_2);
	free(array);

	array_1 = ft_strdup(argv[1]);
	array_2 = ft_strdup(argv[2]);
	array = ft_strtrim(array_1, array_2);
	printf("ft_strtrim: %s\n", array);
	free(array_1);
	free(array_2);
	free(array);

	array_of_strings = ft_split(argv[1], argv[2][0]);
	i = 0;
	while (array_of_strings[i] != NULL)
	{
		printf("element %i: %s\n", i, array_of_strings[i]);
		++i;
	}
	free(array_of_strings);

	array = ft_itoa(ft_atoi(argv[1]));
	printf("ft_itoa: %s\n", array);

	array = ft_strmapi(argv[1], encrypt);
	printf("ft_strmapi: %s ", array);
	array = ft_strmapi(array, decrypt);
	printf("ft_strmapi: %s\n", array);	
	free(array);

	array = ft_strdup(argv[1]);
	ft_striteri(array, encrypt_);
	printf("ft_strmapi: %s ", array);
	ft_striteri(array, decrypt_);
	printf("ft_strmapi: %s\n", array);
	free(array);

	ft_putchar_fd(argv[1][0], ft_atoi(argv[2]));

	ft_putendl_fd(argv[1], ft_atoi(argv[2]));

	ft_putnbr_fd(ft_atoi(argv[1]), ft_atoi(argv[2]));

	list = ft_lstnew(argv[1]);	
	while (list != NULL)
	{
		printf("ft_lstnew: %s\n", (char *) list->content);	
		list = list->next;
	}

	n = ft_strlen(argv[1]);
	list = NULL;	
	new_node = ft_lstnew(argv[1]);
	ft_lstadd_front(&list, new_node); 
	new_node = ft_lstnew(argv[2]);
	ft_lstadd_front(&list, new_node);
	while (list != NULL)
	{
		printf("ft_lstnew: %s\n", (char *) list->content);
		list = list->next;
	}

	list = NULL;	
	i = 2;
	while (i < atoi(argv[1]) + 2)
	{
		new_node = ft_lstnew(argv[i]);
		ft_lstadd_front(&list, new_node);
		++i;
	}
	printf("ft_lstsize: %i\n", ft_lstsize(list));
	while (list != NULL)
	{
		printf("%s\n", (char *) list->content);
		list = list->next;
	}

	list = NULL;	
	i = 2;
	while (i < atoi(argv[1]) + 2)
	{
		new_node = ft_lstnew(argv[i]);
		ft_lstadd_front(&list, new_node);
		++i;
	}
	printf("ft_lstlast: %s\n", (char *) ft_lstlast(list)->content);	
*/
	list = NULL;	
	i = 2;
	while (i < atoi(argv[1]) + 2)
	{
		new_node = ft_lstnew(argv[i]);
		ft_lstadd_back(&list, new_node);
		++i;
	}
	while (list != NULL)
	{
		printf("%s\n", (char *) list->content);
		list = list->next;
	}	
	return (0);
} 
