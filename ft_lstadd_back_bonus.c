#include "libft.h"
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (*lst == 0)
		*lst = new;
	else
	{
		aux = *lst;
		aux = ft_lstlast(*lst);
		aux-> next = new;
	}
}