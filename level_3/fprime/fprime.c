#include <stdio.h>
#include <stdlib.h>


void fprime(int nbr)
{
	int factor = 2;

	if (nbr == 1)
		printf("1");
	while (nbr > 1)
	{
		if (nbr % factor == 0)
		{
			printf("%d", factor);
			nbr = nbr / factor;
			if (nbr > 1)
				printf("*");
		}
		else
			factor++;
	}
}

int main(int argc, char *argv[])
{
	if (argc != 2 || argv[1][0] == '-')
	{
		printf("\n");
		return (1);
	}
	int res = atoi(argv[1]);
	fprime(res);
	printf("\n");
	return (0);
}