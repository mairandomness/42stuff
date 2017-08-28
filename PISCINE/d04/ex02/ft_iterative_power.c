/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 10:20:58 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/12 10:31:17 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
