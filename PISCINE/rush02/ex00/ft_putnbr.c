/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 16:36:25 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/27 18:16:09 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar('8');
	}
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (0 <= nb && nb <= 9)
	{
		c = nb + 48;
		ft_putchar(c);
	}
	if (nb > 9)
	{
		c = nb % 10 + 48;
		nb = nb / 10;
		ft_putnbr(nb);
		ft_putchar(c);
	}
}
