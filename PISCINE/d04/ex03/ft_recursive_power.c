/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 10:31:51 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/12 12:18:18 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int result;

	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	if (power == 0)
		result = 1;
	else
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
