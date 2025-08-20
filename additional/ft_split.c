#include "../include/ft_split.h"
#include "../include/libft.h"
#include <stdlib.h>

static int	count_elements(const char *s, char delimiter);
static int	index_of_first_element(const char *s, char delimiter);
static int	index_of_next_element(const char *s, char delimiter);
static char	*malloc_element(const char *s, char delimiter);

char	**ft_split(const char *s, char c)
{
	char	**array_of_elements;
	int		elements;
	int		i;	
	int		j;

	elements = count_elements(s, c);
	array_of_elements = malloc(sizeof(char *) * (elements + 1));
	if (!array_of_elements)
		return (NULL);
	i = 0;
	j = index_of_first_element(s, c);
	while (i < elements)
	{
		array_of_elements[i] = malloc_element(s + j, c);
		if (!array_of_elements[i])
		{
			free(array_of_elements);
			return (NULL);
		}
		++i;
		j += index_of_next_element(s + j, c);
	}
	array_of_elements[i] = NULL;
	return (array_of_elements);
}

static int	count_elements(const char *s, char delimiter)
{
	int	words;

	words = 0;
	while (*s != '\0')
	{
		if (*s != delimiter && (*(s + 1) == delimiter || *(s + 1) == '\0'))
			++words;
		++s;
	}
	return (words);
}

static int	index_of_first_element(const char *s, char delimiter)
{
	int	i;

	i = 0;
	while (*(s + i) == delimiter && *(s + i) != '\0')
		++i;
	return (i);
}

static int	index_of_next_element(const char *s, char delimiter)
{
	int	i;

	i = 0;
	while (*(s + i) != delimiter && *(s + i) != '\0')
		++i;
	while (*(s + i) == delimiter && *(s + i) != '\0')
		++i;
	return (i);
}

static char	*malloc_element(const char *s, char delimiter)
{
	int		len;
	char	*element;

	len = 0;
	while (*(s + len) != delimiter && *(s + len) != '\0')
		++len;
	element = malloc(sizeof(char) * (len + 1));
	if (!element)
		return (NULL);
	*(element + len) = '\0';
	while (len--)
		*(element + len) = *(s + len);
	return (element);
}
