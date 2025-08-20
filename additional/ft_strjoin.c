#include "../include/ft_strjoin.h"
#include "../include/libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1_len;
	int		len;
	int		i;

	s1_len = ft_strlen(s1);
	len = s1_len + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		*(str + i) = *(s1 + i);	
		++i;
	}
	while (i < len)
		*(str + i++) = *s2++;
	*(str + i) = '\0';	
	return (str);
}
