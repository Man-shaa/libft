/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:08:32 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/02 11:08:32 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charset_count(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
			j++;
		if (set[j] == '\0')
			k++;
		i++;
	}
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	str = malloc(sizeof(char) * charset_count(s1, set) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
			j++;
		if (set[j] == '\0')
		{
			str[k] = s1[i];
			k++;
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}
