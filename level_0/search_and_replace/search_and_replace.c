#include <unistd.h>

int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

int main(int argc, char *argv[])
{
	if (argc != 4 || ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
	{
		write(1, "\n", 1);
		return (1);
	}
	char *s = argv[1];
	int i = 0;
	while (s[i])
	{
		if (s[i] == argv[2][0])
			write(1, &argv[3][0], 1);
		else
			write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}