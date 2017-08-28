/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:44:22 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/12 10:03:58 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	return (0);
}
