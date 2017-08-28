/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 18:34:07 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/15 20:24:42 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
