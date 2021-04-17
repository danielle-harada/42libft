/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:14:25 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/15 16:23:30 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cpy_src;
	char	*cpy_dest;
	char	array[n];
	size_t	i;

	cpy_src = (void *)src;
	cpy_dest = dest;
	i = 0;
	while (i < n)
	{
		array[i] = cpy_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		cpy_dest[i] = array[i];
		i++;
	}
	return (cpy_dest);
}
