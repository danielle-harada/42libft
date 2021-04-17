/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 05:37:48 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/21 22:22:25 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int number)
{
	int i;

	i = 0;
	if (number <= 0)
		i = 1;
	while (number != 0)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	unsigned int	number;
	char			*str;
	int				var;
	int				i;

	var = 0;
	number = n;
	i = int_len(n);
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (0);
	if (n < 0)
	{
		var = 1;
		number = n * (-1);
	}
	str[i--] = '\0';
	while (i >= 0)
	{
		str[i--] = number % 10 + 48;
		number = number / 10;
	}
	if (var == 1)
		str[0] = '-';
	return (str);
}
