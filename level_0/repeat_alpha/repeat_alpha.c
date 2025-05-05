#include <unistd.h>

int main (int argc, char *argv[])
{
	char *str;
	char i;

	str = argv[1];
	if (argc == 2)
	{
		while (*str)
		{
			if (*str >= 'a' && *str <= 'z')
			{
				i = 'a';
				while (i <= *str)
				{
					write(1, str, 1);
					i++;
				}
			}
			else if (*str >= 'A' && *str <= 'Z')
			{
				i = 'A';
				while (i <= *str)
				{
					write(1, str, 1);
					i++;
				}
			}
			else
				write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}