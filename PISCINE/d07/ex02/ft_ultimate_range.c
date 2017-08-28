/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:37:09 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/17 16:34:39 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*a;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	a = malloc(sizeof(int) * (max - min));
	while (min + i < max)
	{
		a[i] = min + i;
		i++;
	}
	*range = a;
	return (sizeof(int) * (max - min));
}
