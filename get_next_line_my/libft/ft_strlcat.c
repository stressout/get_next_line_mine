/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:04:37 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/24 15:09:40 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		d_len;
	size_t		s_len;
	size_t		i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = -1;
	if (d_len > size)
		return (size + s_len);
	while (src[++i] != '\0' && d_len + i < size - 1)
		dst[d_len + i] = src[i];
	dst[d_len + i] = '\0';
	return (s_len + d_len);
}
