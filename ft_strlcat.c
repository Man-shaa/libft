/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:07:52 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/02 11:07:52 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && i + j + 1 < (int)size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	j = 0;
	while (src[j])
		j++;
	if ((int)size <= i)
		return (size + j);
	return (i + j);
}
