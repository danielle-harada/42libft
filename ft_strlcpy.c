/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 21:57:25 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/19 23:57:22 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*cpy_src;
	size_t	i;

	cpy_src = (char *)src;
	i = 0;
	if (size == 0)
		return (ft_strlen(cpy_src));
	while (i < size - 1 && cpy_src[i] != '\0')
	{
		dst[i] = cpy_src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(cpy_src));
}
