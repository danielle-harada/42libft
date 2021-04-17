/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 16:28:47 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/22 01:19:43 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *s, size_t n)
{
	size_t start;
	size_t i;
	size_t j;

	start = 0;
	i = 0;
	if ((ft_strlen((char *)s)) == 0)
		return ((char *)str);
	while (start < n && str[start] != '\0')
	{
		if (str[start] == s[0])
		{
			i = start + 1;
			j = 1;
			while (i < n && str[i] != '\0' && s[j] != '\0' && str[i] == s[j])
			{
				i++;
				j++;
			}
			if (j == (ft_strlen((char *)s)))
				return (char *)&str[start];
		}
		start++;
	}
	return (0);
}
