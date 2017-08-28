/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 22:52:05 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/10 13:24:12 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int		count;
	char	i;
	char	j;
	char	l;

	count = 012;
	while (count++ < 790)
	{
		l = count % 10 + 48;
		j = ((count / 10) % 10) + 48;
		i = count / 100 + 48;
		if (i < j && j < l)
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(l);
			if (count != 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
