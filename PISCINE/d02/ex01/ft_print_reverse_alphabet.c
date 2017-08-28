/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 22:04:45 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/10 13:23:04 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char c_num;

	c_num = 122;
	while (c_num >= 97)
	{
		ft_putchar(c_num);
		c_num = c_num - 1;
	}
}
