#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	ptr = malloc (size * count);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, size * count);
	return (ptr);
}
