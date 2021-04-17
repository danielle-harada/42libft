/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 02:05:34 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/20 07:43:55 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*ret;
	size_t	total_len;

	str1 = (char *)s1;
	str2 = (char *)s2;
	total_len = ft_strlen(str1) + ft_strlen(str2) + 1;
	str3 = malloc(total_len * sizeof(char));
	if (!str1 || !str2)
		return (0);
	ret = str3;
	while (*str1 != '\0')
		*str3++ = *str1++;
	while (*str2 != '\0')
		*str3++ = *str2++;
	*str3 = '\0';
	return (ret);
}
