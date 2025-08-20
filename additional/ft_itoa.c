#include "../include/ft_itoa.h"
#include <stdlib.h>

static int	numlen(int n);
static int	ft_abs(int n);	

char	*ft_itoa(int n)
{
	char	*ascii;
	int		len;
	int		i;

	len = numlen(n);
	ascii = malloc(sizeof(char) * (len + 1));
	if (!ascii)
		return (NULL);
	*(ascii + len) = '\0';
	i = 0;
	if (n < 0)
	{
		*(ascii + i++) = '-';
		--len;
	}
	while (len--)
	{
		*(ascii + i + len) = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (ascii);
}

static int	numlen(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		++len;
	while (n)
	{
		n /= 10;
		++len;
	}
	return (len);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
