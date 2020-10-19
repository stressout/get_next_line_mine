/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:03:16 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/21 19:03:16 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			s1_len;
	size_t			s2_len;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	while (s1_len-- || s2_len--)
	{
		if ((*str1 || *str2) == '\0')
			return (0);
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
