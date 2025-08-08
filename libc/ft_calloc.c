#include "../include/ft_calloc.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*memb;

	memb = malloc(nmemb * size);
	if (!memb)
		return (NULL);
	while (nmemb--)
		memb[nmemb] = 0;	
	return (memb);
}
