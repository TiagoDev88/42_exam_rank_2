#include <unistd.h>



int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	char *s = argv[1];

	while (*s)
	{
		if (*s >= 'a' && *s <= 'm' || *s >= 'A' && *s <= 'M')
		{
			*s = *s + 13;
			write(1, s, 1);
		}
		else if (*s >= 'n' && *s <= 'z' || *s >= 'N' && *s <= 'Z')
		{
			*s = *s - 13;
			write(1, s, 1);
		}
		else
			write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
	return (0);
}