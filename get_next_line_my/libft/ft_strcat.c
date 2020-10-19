/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:02:59 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/21 19:03:00 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strcat(char *s1, const char *s2)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t			d_len;
	size_t			i;

	dest1 = (unsigned char*)s1;
	src1 = (unsigned char*)s2;
	d_len = ft_strlen(s1);
	i = 0;
	while (src1[i] != '\0')
	{
		dest1[d_len + i] = src1[i];
		i++;
	}
	dest1[d_len + i] = '\0';
	return (s1);
}
