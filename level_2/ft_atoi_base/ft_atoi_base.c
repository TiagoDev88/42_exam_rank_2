
#include <stdio.h>

int	char_to_value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}


int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int signal = 1;
	int res = 0;
	int value;
	int len;

	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal = -signal;
		i++;
	}

	while ((value = char_to_value(str[i])) >= 0 && value < str_base)
	{
		res = res * str_base + value;
		i++;
	}


	return (res * signal);
}
