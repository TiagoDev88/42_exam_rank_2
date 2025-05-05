#include <stdlib.h>

int onlyspaces(char c)
{
	if (c == ' ' || c == '	' || c == '\n')
		return (1);
	return (0);
}

int spaces(char c)
{
	if (c == ' ' || c == '	' || c == '\n' || c == '\0')
		return (1);
	return (0);
}

char *getword(char *s, int start, int end)
{
	int i = 0;
	char *word = malloc(sizeof(char *) * (end - start) + 1);
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

int countword(char *s)
{
	int i = 0;
	int word = 0;
	while (s[i])
	{
		while (s[i] && spaces(s[i]))
			i++;
		while (s[i] && !spaces(s[i]))
		{
			if (spaces(s[i + 1]))
				word++;
			i++;
		}
	}
	return (word);
}

char    **ft_split(char *str)
{
	int words = countword(str);
	int i = 0;
	int j = 0;
	int start;

	char **s = malloc(sizeof(char *) * (words + 1));
	if (!s)
		return (NULL);
	while (i < words)
	{
		while (str[j] && onlyspaces(str[j]))
			j++;
		start = j;
		while(str[j] && !onlyspaces(str[j]))
			j++;
		s[i] = getword(str, start, j);
		i++;
	}
	s[words] = NULL;
	return (s);
}
