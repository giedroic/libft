#include "../include/ft_memcmp.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (*((char *) s1) == *((char *) s2) && *((char *) s1) != '\0' && --n > 0)
	{
		++s1;
		++s2;
	}
	return(*((char *) s1) - *((char *) s2));
}
