#include <unistd.h>

int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

int is_space(char c)
{
	if (c == ' ' || c == '	')
		return (1);
	return (0);
}

int letter(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

void rostring (char *s)
{
	int i = 0;
    int start = 0;
    int word = 0;
    int first_word_end = 0;
    int len = ft_strlen(s);
	int first_word_printed = 0;

    while (s[i] && is_space(s[i]))
        i++;
    start = i;
    while (s[i] && !is_space(s[i]))
        i++;
    first_word_end = i;
    while (s[i])
    {
        while (s[i] && is_space(s[i]))
            i++;
        if (!s[i])
            break;
        word = i;
        while (s[i] && !is_space(s[i]))
            i++;
        if (first_word_printed == 1)
            write(1, " ", 1);
        write(1, s + word, i - word);
        first_word_printed = 1;
    }
    if (first_word_end > 0)
    {
        if (first_word_printed == 1)
            write(1, " ", 1);
        write(1, s + start, first_word_end - start);
    }
}


int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}