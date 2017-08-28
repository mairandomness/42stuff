/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 16:32:47 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/14 14:21:25 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int num;
	int i;

	num = 0;
	i = 0;
	is_neg = 1;
	not_wt_s = 0;
	while (str[i])
	{
		if (!((str[i]) > 47 && (str[i] < 58)) && not_wt_s == 1)
			return (num * is_neg);
		if (str[i] == 46)
		{
			if (is_neg == -1)
				return (num * is_neg);
			is_neg = -1;
			not_wt_s = 1;
		}
		if (48 <= str[i] && str[i] <= 57)
		{
			not_wt_s = 1;
			num = num * 10 + ((int)str[i] - 48);
		}
		i++;
	}
	return (num * is_neg);
}

int is_white_spc (char c)
{
	if (c == 20 || c == 9 || (c >= 11 && c <= 14)
		return 1;
}
