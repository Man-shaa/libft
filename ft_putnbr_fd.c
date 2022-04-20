#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int nb, int fd)
{
	long	n;

	n = (long)nb;
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n <= 9)
		ft_putchar_fd((n + 48), fd);
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
}

int	main(void)
{
	ft_putnbr_fd(123, 1);
	return (0);
}