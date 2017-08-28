#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int 	ft_smaller_sqrt(int nb);

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

	
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime (7));
	printf("%d\n", ft_is_prime (9));
	printf("%d\n", ft_is_prime (11));
	printf("%d\n", ft_is_prime(2147483647));

	// ZZ
	
	return (0);
}
