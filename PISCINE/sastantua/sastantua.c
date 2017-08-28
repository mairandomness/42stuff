/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 21:03:51 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/15 11:21:06 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	print_n_chars(int n, char c);
void	p_blk(int blk, int ast, int spcs, int cst);
void	p_last_blk(int size, int ast, int spcs);
void	print_line(int spcs, int ast, int is_door, int is_handle);

void	sastantua(int size)
{
	int blk;
	int cst;
	int spcs;
	int ast;

	blk = 1;
	if (size <= 0 || size > 26752)
		return ;
	while (blk <= size)
	{
		if (size % 2 == 1)
			cst = (3 * size * size + 14 * size - 9) / 4;
		else
			cst = (3 * size * size + 14 * size - 8) / 4;
		if (blk % 2 == 1)
			ast = (3 * blk * blk + 10 * blk - 11) / 2;
		else
			ast = (3 * blk * blk + 10 * blk - 10) / 2;
		spcs = cst - (ast - 1) / 2;
		if (size != blk)
			p_blk(blk, ast, spcs, cst);
		blk++;
	}
	p_last_blk(size, ast, spcs);
}

void	p_blk(int blk, int ast, int spcs, int cst)
{
	int line;

	if (blk == 1) 
	{
		ast = 1;
		spcs = cst - (ast - 1) / 2;
	}
	if (blk == 2)
	{
		ast = 11;
		spcs = cst - (ast - 1) / 2;
	}
	line = 1;
	while (line <= blk + 2)
	{
		print_line(spcs, ast, 0, 0);
		line++;
		ast += 2;
		spcs -= 1;
	}
}

void	p_last_blk(int size, int ast, int spcs)
{
	int line;
	int door;

	if (size % 2 == 1)
		door = size;
	else
		door = size - 1;
	line = 1;
	while (line <= size + 2)
	{
		if (line <= size + 2 - door)
			print_line(spcs, ast, 0, 0);
		else if (((line != size + 3 - (door + 1) / 2) || door < 4))
			print_line(spcs, ast, door, 0);
		else
			print_line(spcs, ast, door, 1);
		line++;
		ast += 2;
		spcs -= 1;
	}
}

void	print_line(int spcs, int ast, int is_door, int is_handle)
{
	print_n_chars(spcs, ' ');
	ft_putchar('/');
	if (is_door == 0)
		print_n_chars(ast, '*');
	else
	{
		if (!is_handle)
		{
			print_n_chars((ast - is_door) / 2, '*');
			print_n_chars(is_door, '|');
			print_n_chars((ast - is_door) / 2, '*');
		}
		else
		{
			print_n_chars((ast - is_door) / 2, '*');
			print_n_chars(is_door - 2, '|');
			ft_putchar('$');
			ft_putchar('|');
			print_n_chars((ast - is_door) / 2, '*');
		}
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	print_n_chars(int n, char c)
{
	while (n > 0)
	{
		ft_putchar(c);
		n--;
	}
}
