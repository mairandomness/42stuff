/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 19:22:34 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/15 20:12:15 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
void	ft_putchar(char c);
int		is_val_input(int bas, char *base);

void ft_putnbr_base(int nbr, char *base)
{
	int bas;

	bas = ft_strlen(base);
	if (!is_val_input(bas, base))
		return;
	if (nbr < 0)
		ft_putchar('-');
		nbr = nbr * (-1);
	while (nbr >= bas)
	{
		ft_putchar(base[nbr % bas]);
		nbr = nbr / bas;
	}
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

int		is_val_input(int bas, char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (bas < 2)
		return (0);
	while (i < bas)
	{
		while (j < bas)
		{
			if (base[i]==base[j] && i != j)
				return (0);
			if (base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
