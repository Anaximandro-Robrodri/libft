#include "libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	aux = *lst;
	while (aux-> next)
	{
		ft_lstdelone(*lst,(*del));
		aux = aux-> next;
	}
	ft_lstdelone(aux,(*del));
	*lst = 0;
}
