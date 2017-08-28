/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srestrep <srestrep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 09:34:55 by srestrep          #+#    #+#             */
/*   Updated: 2017/08/13 12:40:59 by srestrep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_line(int x, int y, int line);
void	print_n_char(int n, char c);
int		ft_putchar(char c);

int		rush(int x, int y)
{
	int col;
	int line;

	line = 1;
	col = 1;
	if (x < 1 && y < 1)
		return (1);
	else
	{
		while (line <= y)
		{
			print_line(x, y, line);
			line++;
		}
	}
	return (0);
}

void	print_line(int x, int y, int line)
{
	if (x == 1 && (line == 1 || line == y))
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else if (x == 1)
	{
		ft_putchar('|');
		ft_putchar('\n');
	}
	else if (line == 1 || line == y)
	{
		ft_putchar('o');
		print_n_char(x - 2, '-');
		ft_putchar('o');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('|');
		print_n_char(x - 2, ' ');
		ft_putchar('|');
		ft_putchar('\n');
	}
}

void	print_n_char(int n, char c)
{
	while (n > 0)
	{
		ft_putchar(c);
		n--;
	}
}
