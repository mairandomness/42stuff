/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 22:13:53 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/11 12:06:24 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void	ft_print_numbers(void)
{
	char c_num;

	c_num = 48;
	while (c_num < 58)
	{
		ft_putchar(c_num);
		c_num++;
	}
}
