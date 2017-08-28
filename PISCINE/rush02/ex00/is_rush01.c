/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rush01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 15:21:00 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/27 17:13:11 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		auxrush01(int x, int y, int i, char *str)
{
	if (i == 0 || i == (x + 1) * y - 2)
	{
		if (str[i] != '/')
			return (0);
	}
	else if (i == x - 1 || i == x * (y - 1) + y - 1)
	{
		if (str[i] != '\\')
			return (0);
	}
	else if (str[i] != '*')
		return (0);
	return (1);
}

int		aux2rush01(int x, int i, char *str)
{
	if ((i % (x + 1) == 0 || i % (x + 1) == x - 1))
	{
		if (str[i] != '*')
			return (0);
	}
	else if (str[i] != ' ')
		return (0);
	return (1);
}

int		is_rush01(int x, int y, char *str)
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
			if (auxrush01(x, y, i, str) == 0)
				return (0);
		}
		else
		{
			if (aux2rush01(x, i, str) == 0)
				return (0);
		}
	}
	return (1);
}
