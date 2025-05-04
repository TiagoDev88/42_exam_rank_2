

int		max(int* tab, unsigned int len)
{
	int i;
	int *array;
	int number;

	array = tab;
	number = 0;
	i = 0;
	if (len == 0)
		return (0);
	while(i < len)
	{
		if(number < array[i])
		{
			number = array[i];
		}
		i++;
	}
	return (number);
}

// #include <stdio.h>rstr_capitalizer

// int main(void)
// {
// 	int arr[] = {1, 3, 14, 5, 9};
// 	int len = 5;
// 	int res;

// 	res = max(arr, 5);
// 	printf("%d\n", res);

// 	return (0);
// }