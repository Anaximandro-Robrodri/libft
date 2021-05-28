#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((((unsigned char *)s)[i]) == (unsigned char) c)
			return ((unsigned char *)s + i);
		i++;
	}
	if (c != '\0')
		return (0);
	else
		return ((unsigned char *)s);
}
