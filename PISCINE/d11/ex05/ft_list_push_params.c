/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 22:22:19 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/23 22:42:32 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;

	list = ft_create_elem(data);
	list->next = *begin_list;
	*begin_list = list;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*begin_list;

	i = 0;
	begin_list = NULL;
	while (i < ac)
	{
		ft_list_push_front(&begin_list, av[i]);
		i++;
	}
	return (begin_list);
}
