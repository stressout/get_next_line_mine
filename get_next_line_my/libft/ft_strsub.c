/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:06:14 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/23 22:04:12 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned char	*s1;
	char			*new_str;
	size_t			i;

	if (s)
	{
		s1 = (unsigned char*)s;
		new_str = NULL;
		i = 0;
		if (!(new_str = ft_strnew(len)))
			return (0);
		while (i < len)
		{
			new_str[i] = s1[start + i];
			i++;
		}
		new_str[i] = '\0';
		return (new_str);
	}
	return (0);
}
