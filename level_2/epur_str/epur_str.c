#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '	')
		return (1);
	return (0);
}


int main(int argc, char *argv[])
{
	if (argc != 2 || argv[1][0] == '\0')
	{
		write(1, "\n", 1);
		return (1);
	}
	int i = 0;
	char *s = argv[1];

	while (s[i])
	{
		while (is_space(s[i]))
			i++;
		while (!is_space(s[i]) && s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
		if (!is_space(s[i - 1]) && s[i] && s[i + 1])
			write(1, " ", 1);
	}
	write(1, "\n", 1);
	return (0);
}