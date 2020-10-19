/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:01:44 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/21 19:01:45 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b1;
	size_t			symb;
	size_t			i;

	b1 = (unsigned char*)b;
	symb = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		b1[i] = symb;
		i++;
	}
	return (b);
}
