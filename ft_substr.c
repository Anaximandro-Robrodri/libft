#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*dst;
	size_t				i;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	dst = malloc (sizeof(char) * (len + 1));
	if (dst == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
