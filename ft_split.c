/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 04:12:42 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/23 14:55:56 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_cw(char const *s, char c)
{
	int count;
	int check;

	count = 0;
	check = 1;
	while (*s != '\0')
	{
		if (*s == c)
			check = 1;
		else if (*s != c && check == 1)
		{
			count++;
			check = 0;
		}
		s++;
	}
	return (count);
}

static char		*string(const char *s, int i, int e)
{
	char *str;

	str = (char *)malloc((e - i + 1) * sizeof(char));
	ft_strlcpy(str, (s + i), (e - i + 1));
	return (str);
}

char			**ft_split(char const *s, char c)
{
	int		start;
	size_t	i;
	size_t	j;
	char	**str;

	i = -1;
	j = 0;
	start = -1;
	if (!s || !(str = malloc((ft_cw(s, c) + 1) * sizeof(char *))))
	{
		return (0);
		free(str);
	}
	while (ft_strlen(s) >= ++i)
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			str[j++] = string(s, start, i);
			start = -1;
		}
	}
	str[j] = 0;
	return (str);
}
