#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*first;

	first = ft_lstnew((f)(lst-> content));
	ptr = first;
	while (lst)
	{
		ptr = (f)(lst-> content);
		lst = lst-> next;
	}
	if (0)
		(del)(lst-> content);
	return (first);
}
