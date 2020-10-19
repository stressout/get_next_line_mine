/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:05:50 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/21 19:05:51 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	k = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[k] != '\0' && k < len)
	{
		if (haystack[k] == needle[0])
		{
			i = 1;
			while (needle[i] != '\0' && haystack[k + i] == needle[i]  \
					&& i + k < len)
				i++;
			if (needle[i] == '\0')
				return ((char*)&haystack[k]);
		}
		k++;
	}
	return (0);
}
