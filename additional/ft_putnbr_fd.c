#include "../include/ft_putnbr_fd.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	n = n % 10 + '0';
	write(fd, &n, 1); 
}
