/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rush02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 15:21:00 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/27 18:23:40 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		auxrush02(int x, int y, int i, char *str)
{
	if (i == 0 || i == x - 1)
	{
		if (str[i] != 'A')
			return (0);
	}
	else if (i == (x + 1) * y - 2 || i == x * (y - 1) + y - 1)
	{
		if (str[i] != 'C')
			return (0);
	}
	else if (str[i] != 'B')
		return (0);
	return (1);
}

int		aux2rush(int x, int i, char *str)
{
	if ((i % (x + 1) == 0 || i % (x + 1) == x - 1))
	{
		if (str[i] != 'B')
			return (0);
	}
	else if (str[i] != ' ')
		return (0);
	return (1);
}

int		is_rush02(int x, int y, char *str)
{
	int i;

	i = -1;
	while (++i < ((x + 1) * y))
	{
		if (i % (x + 1) == x)
		{
			if (str[i] != '\n')
				return (0);
		}
		else if (i < x || (i >= x * (y - 1) + y - 1))
		{
			if (auxrush02(x, y, i, str) == 0)
				return (0);
		}
		else
		{
			if (aux2rush(x, i, str) == 0)
				return (0);
		}
	}
	return (1);
}
