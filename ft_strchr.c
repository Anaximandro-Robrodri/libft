#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	if (c != '\0')
		return (0);
	else
		return ((char *) s);
}
