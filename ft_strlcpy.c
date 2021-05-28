#include "libft.h"
#include <string.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	if (src == 0)
		return (0);
	while (src[c] != 0)
		c++;
	if (dstsize == 0)
		return (c);
	else
	{
		while (src[i] != 0 && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (c);
}
