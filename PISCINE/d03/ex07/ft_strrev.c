/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:56:24 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/11 16:34:36 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	*ft_strrev(char *str)
{
	char	temp;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
