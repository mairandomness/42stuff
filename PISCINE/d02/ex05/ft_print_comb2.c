/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 12:43:22 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/11 13:49:41 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int		count;

	count = 0;
	while (++count < 9900)
	{
		if ((count/100) < (count % 100))
		{
			ft_putchar((char)(count / 1000) + 48);
			ft_putchar((char)(count / 100) % 10 + 48);
			ft_putchar(' ');
			ft_putchar((char)(count / 10) % 10 + 48);
			ft_putchar((char)(count % 10) + 48);
			if (count != 9899)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
