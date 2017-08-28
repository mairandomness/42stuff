/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 11:19:18 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/15 14:25:16 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_low(char c);
int		is_up(char c);

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_low(str[i])) && !(is_up(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int		is_low(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

int		is_up(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
