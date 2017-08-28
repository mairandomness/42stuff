/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 12:19:05 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/12 13:09:49 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int result;

	result = 0;
	if ((index > 46 || index < 0))
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (1 < index)
	{
		if (ft_fibonacci(index - 2) != -1)
			result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (result);
}
