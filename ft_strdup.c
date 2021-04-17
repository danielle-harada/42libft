/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 23:08:17 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/20 00:04:50 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;
	char	*s_len;
	char	*dest_len;

	i = 0;
	s_len = (char *)s;
	while (*s_len != '\0')
	{
		s_len++;
		i++;
	}
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (0);
	s_len = (char *)s;
	dest_len = dest;
	while (i >= 0)
	{
		dest_len[i] = s_len[i];
		i--;
	}
	return (dest);
}
