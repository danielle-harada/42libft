/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:43:51 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/23 14:55:27 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*to_find;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	to_find = 0;
	while (i < n)
	{
		if (ptr[i] != (unsigned char)c)
			i++;
		else
		{
			to_find = &ptr[i];
			return (to_find);
		}
	}
	return (0);
}
