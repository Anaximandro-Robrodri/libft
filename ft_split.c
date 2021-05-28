#include "libft.h"
static void	ft_put_str (char **dst, char *src, int n, char c)
{
	char	*aux;
	int		i;

	i = 0;
	while (i < n - 1)
	{
		aux = ft_strchr(src, c);
		dst[i] = ft_substr(src, 0, (aux - src));
		while (*aux == c)
			aux++;
		src = aux;
		i++;
	}
	dst[i] = ft_strdup(aux);
	dst[++i] = 0;
}

static int	ft_num_words(char const *s, char c)
{
	int	count;

	count = 1;
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1))
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		*trim;
	char		**str_mother;
	int			n;

	if (s == 0)
		return (0);
	trim = ft_strtrim (s, &c);
	if (trim == 0)
		return (0);
	n = ft_num_words(trim, c);
	str_mother = (char **) malloc ((n + 1) * (sizeof (char *)));
	if (str_mother == 0)
		return (0);
	if (n == 1)
	{
		str_mother[0] = trim;
		str_mother[1] = 0;
	}
	else
		ft_put_str (str_mother, trim, n, c);
	return (str_mother);
}
