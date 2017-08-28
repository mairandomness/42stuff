/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:27:47 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/15 15:45:01 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*first_char_to_find;
	char	*first_match;

	first_char_to_find = to_find;
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			if (to_find == first_char_to_find)
				first_match = str;
			str++;
			to_find++;
		}
		else
		{
			str++;
			to_find = first_char_to_find;
		}
		if (*to_find == '\0')
			return (first_match);
	}
	return (NULL);
}
