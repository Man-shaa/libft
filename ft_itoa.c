#include "libft.h"
#include <stdlib.h>

static void	fill(char *str, long nb, int j)
{
	int	i;

	i = 0;
	j--;
	if (nb < 0)
		nb = -nb;
	while (j >= 0 && str[j] != '-')
	{
		str[j] = (nb % 10) + 48;
		nb /= 10;
		j--;
	}
}

char	*ft_itoa(int n)
{
	long	nb;
	int		j;
	char	*str;

	nb = (long)n;
	j = 0;
	while (n != 0)
	{
		n /= 10;
		j++;
	}
	if (nb < 0)
		j++;
	str = malloc(sizeof(char) * j + 1);
	if (!str)
		return (NULL);
	str[j] = '\0';
	fill(str, nb, j);
	return (str);
}

#include <stdio.h>

int	main(void)
{
	printf("%s", ft_itoa(1345));
	return (0);
}