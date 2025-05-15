#include <stdio.h>

char    *ft_strdup(char *src)
{
	int len = 0;
	int i = 0;
	char *arr;
	while(src[len])
		len++;
	arr = malloc(sizeof(char) * len + 1);
	if (!arr)
		return (NULL);
	while (i < len)
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}