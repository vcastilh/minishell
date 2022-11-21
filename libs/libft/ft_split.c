#include "libft.h"

static char	*fill_word(char **arr, size_t j, size_t i, char const **s)
{
	size_t	k;

	arr[j] = (char *)malloc((i + 1) * sizeof(char));
	if (!*arr)
		return (NULL);
	k = 0;
	while (i-- > 0 && **s)
	{
		arr[j][k] = **s;
		(*s)++;
		k++;
	}
	arr[j][k] = '\0';
	return (arr[j]);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	n;
	size_t	i;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			if (s[i++] == '\'')
			{
				n++;
				while (s[i] != '\'')
					i++;
			}
			else
				n++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (n);
}

static char	**ft_get_words(char const *s, char c, size_t num_words, char **arr)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (num_words--)
	{
		i = 0;
		while (*s == c)
			s++;
		while (s[i] != c && s[i] != '\0')
		{
			if (s[i] == '\'')
			{
				i++;
				while (s[i] != '\'')
					i++;
				i++;
			}
			else
				i++;
		}
		arr[j] = fill_word(arr, j, i, &s);
		j++;
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	num_words;
	char	**arr;

	num_words = ft_count_words(s, c);
	arr = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	arr = ft_get_words(s, c, num_words, arr);
	arr[num_words] = NULL;
	return (arr);
}