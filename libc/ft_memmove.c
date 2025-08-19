#include "../include/ft_memmove.h"
#include "../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	if (dst > src)
		ft_memcpy(dst, src, n);	
	else
	{
		while (i < (int) n)
		{
			*((char *) dst + i) = *((char *) src + i);
			++i;
		}
	}
	return (dst);
}
