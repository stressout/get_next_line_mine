/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:00:57 by mkeel             #+#    #+#             */
/*   Updated: 2019/06/03 21:12:04 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			symb;

	i = 0;
	dst1 = (unsigned char*)dst;
	src1 = (unsigned char*)src;
	symb = (unsigned char)c;
	while (n--)
	{
		dst1[i] = src1[i];
		if (src1[i] == symb)
			return (&dst[++i]);
		i++;
	}
	return (0);
}
