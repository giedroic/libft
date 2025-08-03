#include "../include/ft_isalpha.h"

static int	ft_islower(int c);
static int	ft_isupper(int c);

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
