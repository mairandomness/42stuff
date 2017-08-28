/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:54:52 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/22 15:03:27 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *returns;

	i = 0;
	returns = malloc(sizeof(int) * length);
	while (i < length)
	{
		returns[i] = f(tab[i]);
		i++;
	}
	return (returns);
}
