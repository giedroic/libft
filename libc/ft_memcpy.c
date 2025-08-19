#include "../include/ft_memcpy.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		*((char *) dst + n) = *((char *) src + n);
	return (dst);
}
