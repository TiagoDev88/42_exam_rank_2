

char    *ft_strcpy(char *s1, char *s2)
{
	char	*temp;
	int		i;

	temp = s1;
	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (temp);
}
