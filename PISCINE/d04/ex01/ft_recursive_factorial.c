/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 10:10:47 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/15 13:37:47 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	result = 1;
	if (nb >= 0 && nb <= 12)
	{
		if (n == 0)
			result = 1;
		else
			result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	return (0);
}
