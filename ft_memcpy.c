/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:09:29 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/15 15:46:39 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cpy_src;
	char	*cpy_dest;
	size_t	i;

	cpy_src = (void *)src;
	cpy_dest = dest;
	i = 0;
	while (i < n)
	{
		cpy_dest[i] = cpy_src[i];
		i++;
	}
	return (cpy_dest);
}
