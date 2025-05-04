
#include <unistd.h>




int	main (int argc, char *argv[])
{	
	char *str;
	int i;

	str = argv[1];
	i = 0;
	
	if (argc == 2)
	{
		while (str[i] == ' ' || str[i] == '	')
			i++;
		while (str[i] && (str[i] != ' ' && str[i] != '	'))
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}