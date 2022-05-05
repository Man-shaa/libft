/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:07:17 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/02 11:07:17 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		while (str[i] && str[i] != c)
		{
			if (str[i + 1] == c || str[i + 1] == '\0')
				count++;
			i++;
		}
	}
	return (count);
}

static int	count_chars(char *str, char c, int n)
{
	int	i;
	int	chars;
	int	count;

	i = 0;
	count = 0;
	chars = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		while (str[i] && str[i] != c)
		{
			if (count == n)
				chars++;
			if (str[i + 1] == c || str[i + 1] == '\0')
				count++;
			i++;
		}
	}
	return (chars);
}

static char	*put_words(char *str, char c, int n, char *mot)
{
	int	i;
	int	count;
	int	chars;

	i = 0;
	count = 0;
	chars = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		while (str[i] && str[i] != c)
		{
			if (count == n)
			{
				mot[chars] = str[i];
				chars++;
			}
			if (str[i + 1] == c || str[i + 1] == '\0')
				count++;
			i++;
		}
	}
	return (mot);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char *) * (count_words((char *) s, c) + 1));
	while (i < count_words((char *) s, c))
	{
		tab[i] = malloc(sizeof(char) * (count_chars((char *) s, c, i) + 1));
		tab[i] = put_words((char *) s, c, i, tab[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
