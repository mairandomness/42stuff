/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 15:48:25 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/27 18:18:49 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_get_stdin(void)
{
	int		ret;
	int		total_size;
	char	buf[BUF_SIZE + 1];
	char	*final;
	char	tmp[100000];

	total_size = 0;
	final = malloc(42);
	while ((ret = read(0, buf, BUF_SIZE)) > 0)
	{
		ft_strcpy(tmp, final);
		free(final);
		buf[ret] = '\0';
		total_size += ret;
		final = (char *)malloc(sizeof(char) * total_size);
		final = ft_strcat(tmp, buf);
	}
	return (final);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	print_sol(int x, int y, char *str)
{
	if (is_rush00(x, y, str))
		print_msg(x, y, 0);
	if (is_rush01(x, y, str))
		print_msg(x, y, 1);
	if (is_rush02(x, y, str))
	{
		print_msg(x, y, 2);
		if (is_rush03(x, y, str) || is_rush04(x, y, str))
			write(1, " || ", 4);
	}
	if (is_rush03(x, y, str))
	{
		print_msg(x, y, 3);
		if (is_rush04(x, y, str))
			write(1, " || ", 4);
	}
	if (is_rush04(x, y, str))
		print_msg(x, y, 4);
	write(1, "\n", 1);
}

int		main(void)
{
	int		x;
	int		y;
	char	*input_str;

	input_str = ft_get_stdin();
	x = get_x(input_str);
	y = get_y(input_str);
	if (ft_strlen(input_str) == 0 || ft_strlen(input_str) != (x + 1) * y)
	{
		write(1, "aucune\n", 7);
		return (1);
	}
	print_sol(x, y, input_str);
	return (0);
}
