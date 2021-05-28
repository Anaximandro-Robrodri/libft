#include <string.h>
#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	i = len;
	if (c == 0)
		return ((char *) &s[len]);
	while (len + 1 > 0)
	{
		if (s[len] == c)
			return ((char *) &s[len]);
		len--;
	}
	return (0);
}
