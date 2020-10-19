/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:06:20 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/24 01:32:17 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	b;
	size_t	e;
	size_t	n;
	char	*str;

	if (s)
	{
		b = 0;
		e = ft_strlen(s) - 1;
		n = -1;
		while (ft_whitespace(s[b]))
			b++;
		if (s[b] == '\0')
			return (ft_strnew(0));
		while (ft_whitespace(s[e]))
			e--;
		if (!(str = ft_strnew(e - b + 1)))
			return (0);
		while (++n < e - b + 1)
			str[n] = s[b + n];
		str[n] = '\0';
		return (str);
	}
	return (0);
}
