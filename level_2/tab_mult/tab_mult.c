#include <unistd.h>

int ft_miniatoi(char *s)
{
	int i = 0;
	int res = 0;

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - 48);
		i++;
	}
	return (res);
}
void ft_putnbr(int nbr)
{
	int res = 0;
	char c;
	if (nbr > 9)
		ft_putnbr(nbr / 10);		
	c = nbr % 10 + 48;
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int res = 0;
	int nbr;
	int j = 1;
	char i = '1';
	if (argc == 2)
	{
		nbr = ft_miniatoi(argv[1]);
		while (i <= '9')
		{
			write(1, &i, 1);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			res = j * nbr;
			ft_putnbr(res);
			write(1, "\n", 1);
			j++;
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}