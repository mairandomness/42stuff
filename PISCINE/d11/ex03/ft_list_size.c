/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 21:51:03 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/23 22:24:21 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list		*list;
	int			len;

	len = 0;
	list = begin_list;
	while (list != NULL)
	{
		list = list->next;
		len++;
	}
	return (len);
}
