/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:06:08 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/21 19:06:10 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strstr(const char *haystack, const char *needle)
{
	size_t			i;
	size_t			k;

	k = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[k] != '\0')
	{
		if (haystack[k] == needle[0])
		{
			i = 1;
			while ((needle[i] != '\0') && haystack[k + i] == needle[i])
				i++;
			if (needle[i] == '\0')
				return ((char*)&haystack[k]);
		}
		k++;
	}
	return (0);
}
