/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:01:06 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/21 19:01:07 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	symbl;
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char*)s;
	symbl = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (symbl == s1[i])
			return ((unsigned char*)s1);
		s1++;
	}
	return (NULL);
}
