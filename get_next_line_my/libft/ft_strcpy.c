/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 21:42:24 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/23 15:11:50 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strcpy(char *dst, const char *src)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t			i;

	dest1 = (unsigned char*)dst;
	src1 = (unsigned char*)src;
	i = 0;
	while (src1[i] != '\0')
	{
		dest1[i] = src1[i];
		i++;
	}
	dest1[i] = '\0';
	return (dst);
}
