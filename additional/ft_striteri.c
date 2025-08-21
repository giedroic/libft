#include "../include/ft_striteri.h"
#include "../include/libft.h"
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		len;

	len = ft_strlen(s);
	while (len--)
		f(len, (s + len));
}
