/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:06:19 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/02 11:06:19 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (n > 0)
	{
		if (str1[i] != str2[i])
			return ((int)(str1[i] - str2[i]));
		i++;
		n--;
	}
	return (0);
}
