#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}

	int i = 0;
	char *s = argv[1];

	while (s[i])
	{
		if (s[i] == '_' && s[i])
		{
			i++;
			s[i] = s[i] - 32;
			write(1, &s[i], 1);
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}