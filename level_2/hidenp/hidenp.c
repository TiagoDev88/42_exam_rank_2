#include <unistd.h>

void hidenp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (s1[i])
	{
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				count++;
				break;
			}
			j++;
		}
		i++;
	}
	if (i == count)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}