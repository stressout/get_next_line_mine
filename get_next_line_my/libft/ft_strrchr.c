/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:05:55 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/21 21:49:02 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*s1;
	char	symb;
	size_t	len;

	s1 = (char*)s;
	symb = (char)c;
	len = ft_strlen(s);
	if (symb == '\0')
		return (s1 + len);
	while (len--)
		if (s1[len] == symb)
			return (s1 + len);
	return (0);
}
