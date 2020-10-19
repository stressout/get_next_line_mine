/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:05:45 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/23 21:27:09 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*new;

	new = 0;
	if (size + 1 == 0)
		return (0);
	else if (!(new = ft_memalloc(size + 1)))
		return (NULL);
	ft_memset(new, '\0', size + 1);
	return (new);
}
