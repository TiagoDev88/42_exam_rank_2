#include <stdlib.h>
#include <stdio.h>

int	sizerange(int start, int end)
{
	int size;

	size = 0;
	if (start < end)
		size = end - start;
	else if (end < start)
		size = start - end;
	return (size);
}

int     *ft_rrange(int start, int end)
{
	int size;
	int *array;
	int i;

	size = sizerange(start, end);
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	i = 0;
	if (start < end)
	{
		while (start <= end)
		{
			array[i] = end;
			i++;
			end--;
		}
	}
	else if (start > end)
	{
		while (start >= end)
		{
			array[i] = end;
			i++;
			end++;
		}
	}
	else
	{
		array[0] = 0;
	}
	return (array);
}

// int main(void)
// {
// 	int *res;
// 	int i;
// 	i = 0;
// 	res = ft_rrange(-1, 2);
// 	while (i < 5)
// 	{
// 		printf("%d\n", res[i]);
// 		i++;
// 	}
// 	return (0);
// }