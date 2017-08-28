/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 22:16:00 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/24 16:33:37 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

ft_list	*ft_list_last(t_list *begin_list)
{
	t_list		*list;

	list = begin_list;
	while (list->next != NULL)
	{
		list = list->next;
	}
	return (list);
}
