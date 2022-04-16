#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *str, int fd)
{
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
	write(fd, "\n", 1);
}

int	main(void)
{
	char	str[] = "Hello comment ca va ?";
	ft_putendl_fd(str, 1);
	return (0);
}