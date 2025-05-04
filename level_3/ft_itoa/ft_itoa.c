#include <stdlib.h>
#include <stdio.h>

int countlen(int nbr)
{
	int i;

	i = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	while(nbr >= 10)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int i = 0;
	char *s;
	int len = 0;
	int count = 0;

	s = NULL;
	len = countlen(nbr);
	count = len - 1;
	s = malloc(sizeof(char) * len + 1);
	if (!s)
		return (NULL);
	if (nbr == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	else
	{
		if (nbr < 0)
		{
			s[0] = '-';
			nbr = -nbr;
			i = 1;
		}
		while (i <= count)
		{
			s[count] = (nbr % 10) + 48;
			nbr = nbr / 10;
			count--;
		}
		s[len] = '\0';
	}
	return (s);
}
