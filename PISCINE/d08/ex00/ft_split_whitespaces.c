/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 17:18:31 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/17 22:25:44 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		len_cur_word(char *str);
int		num_words(char *str);
void	ft_strcpy(char *dest, char **str, int len);

char	**ft_split_whitespaces(char *str)
{
	char	**word_list;
	int		k;
	int		len;
	char	*temp;

	temp = str;
	k = 0;
	word_list = malloc(sizeof(char*) * (num_words(str) + 1));
	while (num_words(str) > 0)
	{
		len = len_cur_word(str);
		if (len == 0)
			str++;
		else
		{
			word_list[k] = malloc(sizeof(char) * (len + 1));
			ft_strcpy(word_list[k], &str, len);
			k++;
		}
	}
	word_list[k] = NULL;
	str = temp;
	return (word_list);
}

void	ft_strcpy(char *dest, char **str, int len)
{
	int j;

	j = 0;
	while (j < len)
	{
		dest[j] = **str;
		j++;
		(*str)++;
	}
	dest[j] = '\0';
}

int		len_cur_word(char *str)
{
	int len;

	len = 0;
	while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
	{
		len++;
		str++;
	}
	return (len);
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

int		num_words(char *str)
{
	int i;
	int len;
	int word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		len = len_cur_word(str + i);
		if (len == 0)
			i++;
		else
		{
			i = i + len;
			word_count++;
		}
	}
	return (word_count);
}
