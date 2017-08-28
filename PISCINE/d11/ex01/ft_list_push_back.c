/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 11:20:57 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/23 21:46:34 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list **list;

	list = begin_list;
	while (*list != NULL)
	{
		list = &((*list)->next);
	}
	*list = ft_create_elem(data);
}
