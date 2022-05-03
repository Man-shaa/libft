/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:06:37 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/02 11:06:37 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		n = (unsigned int)(nb * -1);
	}
	else
		n = (unsigned int)nb;
	if (n >= 10)
		ft_putnbr_fd((n / 10), fd);
	ft_putchar_fd((n % 10 + 48), fd);
}
