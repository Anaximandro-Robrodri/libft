#include "libft.h"
void	ft_putnbr_fd(int n, int fd)
{
	char			z;
	unsigned int	nb;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = n * (-1);
	}
	nb = (unsigned int) n;
	if (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
		z = '0' + (nb % 10);
		write (fd, &z, 1);
	}
	else
	{
		z = nb + '0';
		write (fd, &z, 1);
	}
}
