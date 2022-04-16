#include "libft.h"
#include <stdlib.h>

static int	count_char(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		i++;
		j++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * count_char(s1, s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}	
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	s1[] = "Hello ";
	char	s2[] = "comment ca va ?";
	printf("%i\n", count_char(s1, s2));
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}