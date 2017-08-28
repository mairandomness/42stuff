/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 09:14:29 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/18 10:20:38 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN_MSG "I have an even number of arguments.\n"
# define EVEN(nbr) (nbr % 2 == 0)
# define TRUE 1
# define FALSE 0
# define SUCCESS 0

typedef int		t_bool;

#endif
