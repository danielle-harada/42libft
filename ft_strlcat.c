/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 22:26:28 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/19 22:39:02 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t dst_size;
	size_t src_size;

	i = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen((char *)src);
	if (n < dst_size)
		return (src_size + n);
	while (src[i] != '\0' && (dst_size + i + 1) < n)
	{
		dst[dst_size + i] = ((char *)src)[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (src_size + dst_size);
}
