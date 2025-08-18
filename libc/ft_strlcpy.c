#include "../include/ft_strlcpy.h"
#include "../include/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0' && i < (int) dstsize - 1)	
	{
		*(dst + i) = *(src + i);
		++i;
	}
	if (++i <= (int) dstsize)
		*(dst + i) = '\0';
	return (ft_strlen(src));
}
