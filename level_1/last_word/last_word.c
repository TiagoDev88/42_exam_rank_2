#include <unistd.h>
int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

int is_space(char c)
{
	if (c == ' ' || c == '	')
		return (1);
	return (0);
}

int main (int argc, char *argv[])
{
	int i = 0;
	int len;
	char *s = argv[1];
	if (argc == 2)
	{
		len = ft_strlen(s) - 1;
		while (s[len])
		{
			while (is_space(s[len]) && s[len])
				len--;
			i = len;
			while (!is_space(s[i]) && s[i])
				i--;
			if (!is_space(s[i + 1]) && s[i])
			{
				i++;
				while (i <= len)
				{
					write(1, &s[i], 1);
					i++;
				}
				break;

			}
			len--;
		}
	}
	write(1, "\n", 1);
	return (0);
}