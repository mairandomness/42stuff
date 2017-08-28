/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 16:32:47 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/14 16:23:54 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		par_atoi(char *str, int is_pos, int not_wt_s);

int		ft_atoi(char *str)
{
	return (par_atoi(str, -1, 0));
}

int		par_atoi(char *str, int is_pos, int not_wt_s)
{
	int num;
	int i;

	num = 0;
	i = 0;
	while (str[i])
	{
		if (!(('0' <= str[i] && str[i] <= '9')) && not_wt_s == 1)
			return (num * is_pos);
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				is_pos = 1;
			not_wt_s = 1;
		}
		if ('0' <= str[i] && str[i] <= '9')
		{
			not_wt_s = 1;
			num = num * 10 - ((int)str[i] - 48);
		}
		i++;
	}
	return (num * is_pos);
}
