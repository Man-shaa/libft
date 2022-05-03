/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:06:22 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/02 11:06:22 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*dest1;
	const char	*src1;
	size_t		i;

	i = 0;
	dest1 = (char *)dest;
	src1 = (const char *)src;
	if (dest1 < src1)
	{
		while (len > i)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
			dest1[len] = src1[len];
	}
	return (dest);
}
