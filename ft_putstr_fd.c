#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *str, int fd)
{
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
}

int	main(void)
{
	char	str[] = "";
	ft_putstr_fd(str, 1);
	return (0);
}