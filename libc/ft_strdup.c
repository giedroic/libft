#include "../include/ft_strdup.h"
#include "../include/libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int	len;
	char	*dup;

	len = ft_strlen(s1);
	dup = (char *) malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	*(dup + len) = '\0';
	while (len--)
		*(dup + len) = *(s1 + len);
	return (dup);
}
