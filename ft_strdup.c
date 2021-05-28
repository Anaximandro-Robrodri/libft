#include "libft.h"
static char	*ft_strcpy (char *dest, const char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	char		*str;
	int			i;

	i = ft_strlen(s1);
	str = malloc (i + 1);
	if (str == 0)
		return (0);
	return (ft_strcpy(str, s1));
}
