/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 18:58:21 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/23 21:08:51 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_atoi(const char *str)
{
	size_t				i;
	long				result;
	int					m;

	i = 0;
	result = 0;
	m = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		m = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result * 10 / 10 != result || result * 10 + (str[i] - '0') < 0)
			return (m == 1 ? -1 : 0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * m);
}
