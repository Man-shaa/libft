/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:04:01 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/02 11:04:01 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill(char *str, long nb, int j)
{
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
