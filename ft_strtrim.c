/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 02:26:05 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/20 07:50:09 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_compare(const char c, const char *str)
{
	int str_len;

	str_len = ft_strlen((char *)str);
	while (str_len >= 0)
	{
		if (str[str_len] == c)
			return (1);
		str_len--;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int size_s1;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i] != '\0' && (ft_compare(s1[i], set) == 1))
		i++;
	size_s1 = ft_strlen((char *)s1 + i) - 1;
	while (size_s1 >= 0 && ft_compare((s1 + i)[size_s1], set) == 1)
		size_s1--;
	return (ft_substr(s1, i, (size_s1 + 1)));
}
