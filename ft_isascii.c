#include "libft.h"
int	ft_isascii (int c)
{
	if (c < 0 || c > 0177)
		return (0);
	else
		return (1);
}