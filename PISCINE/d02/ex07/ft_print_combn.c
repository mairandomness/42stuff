/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:14:46 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/11 11:49:35 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid_number(int order, int p_num);
int		ft_putchar(char c);
void	print_num(int order, int p_num);

void	ft_print_combn(int n)
{
	int p_num;
	int order;
	int is_first;

	p_num = -1;
	order = 1;
	is_first=1;
	while (n > 0)
	{
		order = order * 10;
		n--;
	}
	while ( ++p_num < order )
	{
		if (is_valid_number(order, p_num))
		{
			if (!is_first)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			print_num(order, p_num);
			is_first = 0;
		}
	}
}

int   is_valid_number(int order, int p_num)
{
  while ( order >= 100)
  {
    order = order / 10;
    if (p_num / order >= ((p_num % order) / (order / 10)))
    {
      return 0;
    }
    p_num = p_num % order;
  }
  return 1;
}

void	print_num(int order, int p_num)
{
	char c;

	while (order >= 10)
	{
		order = order / 10;
		c = p_num / order + 48;
		p_num = p_num % order;
		ft_putchar(c);
	}
}
