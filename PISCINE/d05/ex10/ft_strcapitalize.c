/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 22:17:09 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/15 09:24:24 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_low(char c);
int		is_up(char c);
int		is_n_l(char c);

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && is_low(str[i]))
			str[i] = str[i] - 32;
		else if (is_low(str[i]) && !(is_n_l(str[i - 1])))
			str[i] = str[i] - 32;
		else if (is_up(str[i]) && (is_n_l(str[i - 1])))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
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

int		is_n_l(char c)
{
	if (is_low(c) || is_up(c) || ('0' <= c && c <= '9'))
		return (1);
	else
		return (0);
}
