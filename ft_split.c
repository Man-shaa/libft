#include "libft.h"
#include <stdlib.h>

static int	is_charset(char str, char c)
{
	if (str == c)
		return (1);
	return (0);
}

static int	word_count(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && is_charset(str[i], c) == 1)
			i++;
	while (str[i])
	{
		j++;
		while (str[i] && is_charset(str[i], c) == 0)
			i++;
		while (str[i] && is_charset(str[i], c) == 1)
			i++;
	}
	return (j);
}

static char	*ft_dup(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] && is_charset(s[i], c) == 0)
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && is_charset(s[i], c) == 0)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;

	i = 0;
	j = 0;	
	dest = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (dest == NULL)
		return (NULL);
	while (s[i] && is_charset(s[i], c) == 1)
		i++;
	while (s[i])
	{
		ft_dup(&s[j], c);
		while (s[i] && is_charset(s[i], c) == 0)
			i++;
		while (s[i] && is_charset(s[i], c) == 1)
			i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}