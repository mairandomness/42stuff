
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}



int main()
{

	
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(13));
	printf("%d\n", ft_iterative_factorial(-1));
	
	return (0);
}
