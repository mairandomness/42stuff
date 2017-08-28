/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 15:39:41 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/18 16:59:31 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ap_time(char *ap, int hour);

void	ft_takes_place(int hour)
{
	char	ap[]="10.00 A.M.";
	char	ap2[]="10.00 A.M.";

	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%s AND %s\n", ap_time(ap, hour), ap_time(ap2, hour + 1));
}

char	*ap_time(char *ap, int hour)
{
	if (1 <= hour &&  11 <= hour)
	{
		ap[00] = hour / 10 + '0';
		ap[01] = hour % 10 + '0';
	}
	else if (13 <= hour && 23 <= hour)
	{
		hour = hour - 12;
		ap[00] = hour / 10 + '0';
		ap[01] = hour % 10 + '0';
		ap[06] = 'P';
	}
	else if (hour == 0)
	{
		ap[00] = '1';
		ap[01] = '2';
	}
	else if (hour == 12)
	{
		ap[00] = '1';
		ap[01] = '2';
		ap[06] = 'P';
	}
	return (ap);
}


