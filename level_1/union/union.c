#include <unistd.h>

void ft_union(char *s1, char *s2)
{
	int seen[128] = {0};
	int i = 0;
	int j;

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] && !seen[(int)s1[i]])
			{
				seen[(int)s1[i]] = 1;
				write(1, &s1[i], 1);
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (s2[i] && !seen[(int)s2[i]])
		{
			seen[(int)s2[i]] = 1;
			write(1, &s2[i], 1);
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}