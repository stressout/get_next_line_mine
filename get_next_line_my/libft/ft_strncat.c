/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:05:01 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/21 19:05:02 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t			i;
	size_t			d_len;

	dest1 = (unsigned char*)s1;
	src1 = (unsigned char*)s2;
	i = 0;
	d_len = ft_strlen(s1);
	while (i < n && src1[i] != '\0')
	{
		dest1[d_len + i] = src1[i];
		i++;
	}
	dest1[d_len + i] = '\0';
	return (s1);
}
