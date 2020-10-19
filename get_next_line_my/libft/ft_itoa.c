/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:00:40 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/23 14:19:28 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_num_str(int nbr)
{
	size_t			len;

	len = 1;
	while (nbr /= 10)
		len++;
	return (len);
}

char				*ft_itoa(int n)
{
	unsigned int	nb;
	size_t			i;
	size_t			n_size;
	char			*it;

	nb = n;
	n_size = ft_num_str(n);
	if (!(it = (char*)malloc(sizeof(*it) * (n_size + 1 + (n < 0 ? 1 : 0)))))
		return (0);
	if (n < 0)
	{
		nb = n * (-1);
		it[0] = '-';
		n_size++;
	}
	i = n_size - 1;
	while (nb > 9)
	{
		it[i] = ((nb % 10) + '0');
		nb = nb / 10;
		i--;
	}
	it[i] = nb + 48;
	it[n_size] = '\0';
	return (it);
}
