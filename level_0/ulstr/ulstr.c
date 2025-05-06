#include <unistd.h>



int main(int argc, char *argv[])
{
	char *s = argv[1];
	int i = 0;
	if (argc == 2)
	{
		while (s[i])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				write(1, &s[i], 1);
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = s[i] + 32;
				write(1, &s[i], 1);
			}
			else
				write(1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}