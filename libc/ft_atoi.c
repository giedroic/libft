#include "../include/ft_atoi.h"
#include "../include/libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (*str == ' ')	
		++str;
	if (*str == '-')
	{
		sign = -sign;
		++str;
	}
	else if (*str == '+')
		++str;
	while (ft_isdigit(*str))
		n = n * 10 + (*str++ - '0');
	return (sign * n);
}	
