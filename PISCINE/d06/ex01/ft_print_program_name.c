/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 13:58:07 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/16 15:20:56 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int		i;
	int		j;

	j = argc;
	i = 0;
	while (argv[0][i] != '\0')
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
}
