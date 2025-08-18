#include "../include/ft_memcpy.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	while (n--)
		*((char *) dst + n) = *((char *) src + n);
	return (dst);
}
