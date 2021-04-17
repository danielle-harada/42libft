/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:18:04 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/17 22:34:35 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
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
		if (cpy_src[i] == c)
			return (cpy_dest + i + 1);
		i++;
	}
	return (0);
}
