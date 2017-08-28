/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:25:38 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/17 11:37:53 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	sort(int argc, char *argv[]);
int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char *argv[])
{
	int		i;
	int		j;

	sort(argc, argv);
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

void	sort(int argc, char *argv[])
{
	int		changes;
	int		i;
	char	*temp;

	i = 1;
	changes = 0;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			changes++;
		}
		if (i == argc - 2 && changes > 0)
		{
			i = 0;
			changes = 0;
		}
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
