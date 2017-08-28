/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 10:44:02 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/17 17:15:56 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *numbers;
	int i;

	if (min >= max)
		return (NULL);
	i = 0;
	numbers = malloc(sizeof(int) * (max - min));
	while (min + i < max)
	{
		numbers[i] = min + i;
		i++;
	}
	return (numbers);
}
