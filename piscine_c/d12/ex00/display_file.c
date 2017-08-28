/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 16:29:58 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/24 20:58:31 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	read_file(char *file)
{
	int		fc;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fc = open(file, O_RDONLY);
	if (fc == -1)
	{
		write(2, "open() error.\n", 14);
		return ;
	}
	ret = read(fc, buf, BUF_SIZE);
	while (ret)
	{
		if (ret == -1)
		{
			write(2, "read() error.\n", 14);
			return ;
		}
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fc, buf, BUF_SIZE);
	}
	if (close(fc) == -1)
		write(2, "close() error.\n", 15);
}

int		main(int argc, char **argv)
{
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc == 2)
	{
		read_file(argv[1]);
		return (0);
	}
	return (1);
}
