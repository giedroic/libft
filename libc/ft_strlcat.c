#include "../include/ft_strlcat.h"
#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	dstlen;
	int	i;

	dstlen = ft_strlen(dst);
	i = 0;
	while (*(src + i) != '\0' && i < (int) dstsize - dstlen - 1)
	{
		*(dst + dstlen + i) = *(src + i);
		++i;
	}
	if (++i <= (int) dstsize - dstlen)
	{
		*(dst + dstlen + i) = '\0';
		return (dstlen + ft_strlen(src));
	}
	else
		return (dstsize + ft_strlen(src));
}
