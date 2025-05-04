#include <unistd.h>

void	rstr_capitalizer(char *s)
{
	int i = 0;
	int j;

	while(s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
		i++;
	}

	i = 0;
	while(s[i])
	{
		j = i + 1;
		if (s[j] == ' ' || s[j] == '\t' || s[j] == '\0')
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		write(1, &s[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			rstr_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}