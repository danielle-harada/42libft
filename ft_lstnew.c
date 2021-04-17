/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 08:23:50 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/21 19:36:45 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *elem;

	elem = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!elem)
		return (0);
	elem->content = content;
	elem->next = 0;
	return (elem);
}
