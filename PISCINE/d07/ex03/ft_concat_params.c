/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:38:42 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/17 20:36:40 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		total_len(int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	int		totallen;
	int		i;
	int		j;
	int		k;
	char	*concat;

	totallen = total_len(argc, argv);
	i = 1;
	j = 0;
	k = 0;
	concat = malloc(sizeof(char) * (totallen + 1));
	while (i < argc)
	{
		while (argv[i][j])
		{
			concat[k] = argv[i][j];
			k++;
			j++;
		}
		concat[k] = '\n';
		k++;
		i++;
		j = 0;
	}
	return (concat);
}

int		total_len(int argc, char **argv)
{
	int i;
	int totallen;

	totallen = 0;
	i = 0;
	while (i < argc)
	{
		totallen += ft_strlen(argv[i]) + 1;
		i++;
	}
	return (totallen);
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
