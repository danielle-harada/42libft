/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:04:31 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/21 19:42:08 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ptr;
	t_list *start;
	t_list *elem;

	start = 0;
	ptr = 0;
	if (!lst || !f)
		return (0);
	while (lst)
	{
		if (!(elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&start, del);
			start = 0;
			return (0);
		}
		if (!start)
			start = elem;
		else
			ptr->next = elem;
		ptr = elem;
		lst = lst->next;
	}
	return (start);
}
