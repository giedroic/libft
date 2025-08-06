#include "../include/ft_isalnum.h"
#include "../include/libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
