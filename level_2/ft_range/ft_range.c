#include <stdlib.h>

int sizelen(int start, int end)
{
	if (start > end)
		return (start - end);
	else if (start < end)
		return (end - start);
	else
		return (1);
}

int     *ft_range(int start, int end)
{
	int len = sizelen(start, end);
	int *str;
	int i = 0;

	str = malloc(sizeof(int) * len);
	if (!str)
		return (NULL);
	if (start < end)
	{
		while (start <= end)
		{
			str[i] = start;
			i++;
			start++;
		}
	}
	else if (start > end)
	{
		while (start >= end)
		{
			str[i] = start;
			i++;
			start--;
		}
	}
	else
		str[0] = 0;
	return (str);
}
