#include "../include/ft_strrchr.h"
#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len--)
	{
		if (*(s + len) == c)
			return ((char *) (s + len));
	}
	return (NULL);
}
