/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:03:34 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/22 23:20:31 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strdup(const char *s1)
{
	char			*s;
	char			*mem;
	size_t			i;

	s = (char*)s1;
	mem = NULL;
	i = 0;
	if (!(mem = ft_strnew(ft_strlen((char*)s))))
		return (0);
	while (s[i] != '\0')
	{
		mem[i] = s[i];
		i++;
	}
	mem[i] = '\0';
	return ((char*)mem);
}
