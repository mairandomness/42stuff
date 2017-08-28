/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 13:23:16 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/12 13:37:12 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int p_sqrt;

	if (nb <= 0 || nb > 2147395600)
		return (0);
	if (nb >= 536848900)
		p_sqrt = 22170;
	else
		p_sqrt = 1;
	while (p_sqrt * p_sqrt <= nb)
	{
		if (p_sqrt * p_sqrt == nb)
			return (p_sqrt);
		p_sqrt++;
	}
	return (0);
}
