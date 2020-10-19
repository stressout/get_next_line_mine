/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:03:05 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/23 19:35:43 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strchr(const char *s, int c)
{
	char			*s1;
	unsigned char	symb;
	size_t			len;

	s1 = (char*)s;
	symb = (unsigned char)c;
	len = ft_strlen(s1) + 1;
	while (len--)
	{
		if (*s1 == symb)
			return (s1);
		s1++;
	}
	return (0);
}
