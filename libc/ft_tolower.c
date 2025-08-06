#include "../include/ft_tolower.h"

static int	ft_isupper(int c);

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + ('a' - 'A'));
	return (c);
}

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
