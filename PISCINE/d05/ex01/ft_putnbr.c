/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:15:08 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/14 11:08:18 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
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
