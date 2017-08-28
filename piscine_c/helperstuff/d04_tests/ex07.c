
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int 	ft_smaller_sqrt(int nb);

int		ft_is_prime(int nb);

int ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		if (nb % 6 == 5)
			nb = nb + 2;
		else if ((0 < nb % 6 ))
			nb = nb - (nb % 6) + 5;
		else if (nb % 6 == 0)
			nb = nb + 1;
	}
	if (ft_is_prime(nb))
		return nb;
	else
		return ft_find_next_prime(nb);
}

int		ft_is_prime(int nb)
{
	int div;
	int w;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	div = 5;
	w = 2;
	while ((div < 46340) && (div * div <= nb))
	{
		if ( nb % div == 0)
		{
			return (0);
		}
		div = div + w;
		w = 6 - w;
	}
	return (1);
}



int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}



int main()
{

	
	// printf("%d\n", ft_find_next_prime(30));
	// printf("%d\n", ft_find_next_prime(31));
	// printf("%d\n", ft_find_next_prime(32));
	printf("%d\n", ft_find_next_prime(1357202));
	printf("%d\n", ft_find_next_prime(34));
	printf("%d\n", ft_find_next_prime(35));
	printf("%d\n", ft_is_prime(37));


	// ZZ
	
	return (0);
}