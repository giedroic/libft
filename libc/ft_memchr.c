#include "../include/ft_memchr.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*((char *) s) != '\0' && n-- > 0)
	{
		if (*(char *) s == c)
			return ((void *) s);
		++s;
	}
	return (NULL);
}	
