/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:43:39 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/10 13:22:52 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char c_num;

	c_num = 97;
	while (c_num < 123)
	{
		ft_putchar(c_num);
		c_num = c_num + 1;
	}
}
