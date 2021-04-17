/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteixeir <dteixeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 18:44:14 by dteixeir          #+#    #+#             */
/*   Updated: 2021/02/20 00:04:11 by dteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int i;
	int val_ascii;
	int var;

	i = 0;
	val_ascii = 0;
	var = 1;
	while ((nptr[i] > 8 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			var = -1;
		i++;
	}
	while (nptr[i] != '\0' && (nptr[i] >= 48 && nptr[i] <= 57))
	{
		val_ascii *= 10;
		val_ascii += nptr[i] - 48;
		i++;
	}
	return (val_ascii * var);
}
