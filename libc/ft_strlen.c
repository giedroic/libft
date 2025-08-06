#include "../include/ft_strlen.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (*(s + len) != '\0')
		++len;
	return (len);
}
