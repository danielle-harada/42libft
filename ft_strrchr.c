/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 05:02:41 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/20 00:05:19 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned char	chr;
	int				i;

	chr = c;
	str = (char *)s;
	i = 1;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	while (i > 0)
	{
		if (*str == chr)
			return (str);
		i--;
		str--;
	}
	if (c == '\0')
		return (str);
	return (0);
}
