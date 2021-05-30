/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 15:57:55 by robrodri          #+#    #+#             */
/*   Updated: 2021/05/30 15:57:57 by robrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*first;

	if (lst == 0 || f == 0)
		return (0);
	first = 0;
	while (lst)
	{
		ptr = (ft_lstnew((f)(lst-> content)));
		if (ptr == 0)
		{
			ft_lstclear(&ptr, del);
			return (0);
		}
		ft_lstadd_back(&first, ptr);
		lst = lst-> next;
	}
	return (first);
}
