#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*aux;

	if (s == 0 || f == 0)
		return (0);
	i = 0;
	aux = malloc(ft_strlen(s) + 1);
	if (aux == 0)
		return (0);
	while (s[i])
	{
		aux[i] = (f)(i, s[i]);
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
