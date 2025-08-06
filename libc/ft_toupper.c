#include "../include/ft_toupper.h"

static int	ft_islower(int c);

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - ('a' - 'A'));
	return (c);
}

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
