#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (s1 == 0)
		return ((char *) s2);
	if (s2 == 0)
		return ((char *) s1);
	str = malloc ((ft_strlen(s1) + ft_strlen(s2) + 2) * sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
