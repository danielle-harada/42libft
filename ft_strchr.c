/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 02:51:09 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/19 23:57:03 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	chr;

	chr = c;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == chr)
			return (str);
		str++;
	}
	if (c == '\0')
		return (str);
	return (0);
}
