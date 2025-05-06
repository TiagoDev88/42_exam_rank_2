#include <stdlib.h>
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
	char *s = argv[1];
	int len = ft_strlen(s) - 1;
	int end = len;
	int start;
	int i;
	if (argc == 2)
	{
		while (end > 0)
		{
			while (end >= 0 && is_space(s[end]))
				end--;
			if (end < 0)
				break;
			start = end;
			while (start >= 0 && !is_space(s[start]))
				start--;
			i = start + 1;
			while (i <= end)
			{
				write(1, &s[i], 1);
				i++;
			}
			if (start > 0)
				write(1, " ", 1);
			end = start;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}