#include <unistd.h>
#include <stdlib.h>

int miniatoi(char *s)
{
	int res = 0;
	int i = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - 48;
		i++;
	}
	return (res);
}

int	is_prime(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int n)
{
	char c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + 48;
	write(1, &c, 1);
}

int add_prime_sum(int nbr)
{

	int res = 0;
	while (nbr > 0)
	{
		if (is_prime(nbr))
			res = res + nbr;
		nbr--;
	}
	return (res);
}
#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc != 2 || argv[1][0] == '-')
	{
		write(1, "0", 1);
		write(1, "\n", 1);
		return (1);
	}
	int res = miniatoi(argv[1]);
	int r = add_prime_sum(res);
	ft_putnbr(r);
	write(1, "\n", 1);
	return (0);
}