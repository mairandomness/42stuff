/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 14:13:40 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/12 19:57:32 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int div;
	int w;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	div = 5;
	w = 2;
	while ((div < 46340) && (div * div <= nb))
	{
		if (nb % div == 0)
		{
			return (0);
		}
		div = div + w;
		w = 6 - w;
	}
	return (1);
}
