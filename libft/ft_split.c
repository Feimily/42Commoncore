static unsigned int	ft_word_count(char const *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	**free_split(char **arr)
{
	char	**tmp;

	tmp = arr;
	while (*tmp)
		free(*tmp++);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char **matrix;
	size_t i;
	size_t start;
	size_t j;
	if (!s)
		return (NULL);
	matrix = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	j = 0;
	i = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			start = (unsigned int)i;
		while (s[i] != c && s[i])
			i++;
		matrix[j] ft_substr(s, start, i - start);
		if (*matrix[j] == NULL)
			free_split() j++;
	}
	return (matrix);
}