#include "../include/ft_strmapi.h"
#include "../include/libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);	
	*(str + len) = '\0';
	while (len--)
		*(str + len) = f(len, *(s + len));
	return (str);
}
