/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rush00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 15:20:32 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/27 17:12:17 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		auxrush00(int x, int y, int i, char *str)
{
	if (i < x || (i >= x * (y - 1) + y - 1))
	{
		if ((i % (x + 1) == 0 || i % (x + 1) == x - 1))
		{
			if (str[i] != 'o')
				return (0);
		}
		else if (str[i] != '-')
			return (0);
	}
	else
	{
		if ((i % (x + 1) == 0 || i % (x + 1) == x - 1))
		{
			if (str[i] != '|')
				return (0);
		}
		else if (str[i] != ' ')
			return (0);
	}
	return (1);
}

int		is_rush00(int x, int y, char *str)
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
		else
		{
			if (auxrush00(x, y, i, str) == 0)
				return (0);
		}
	}
	return (1);
}
