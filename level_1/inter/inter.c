#include <unistd.h>

void inter(char *s1, char *s2)
{
	int i = 0;
	int j;
	int seen[128] = {0};

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j] && seen[(int)s1[i]] == 0)
			{
				seen[(int)s1[i]] = 1;
				write(1, &s1[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}

int main (int argc, char *argv[])
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}