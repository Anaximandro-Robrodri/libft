#include "libft.h"
t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (lst == 0)
		return (0);
	lst-> content = content;
	lst-> next = NULL;
	return (lst);
}
