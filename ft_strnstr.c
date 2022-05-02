/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:08:25 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/02 11:08:25 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] && i < (int)n)
	{
		j = 0;
		while (s1[i] == s2[j])
		{
			if (s2[j + 1] == '\0' && i < (int)n)
				return ((char *)&s1[i - j]);
			j++;
			i++;
		}
		i -= j;
		i++;
	}
	return (0);
}
