/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:00:49 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/22 22:57:28 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*new_malloc;

	new_malloc = 0;
	if (!(new_malloc = (void*)malloc(sizeof(*new_malloc) * (size))))
		return (NULL);
	ft_bzero(new_malloc, size);
	return (new_malloc);
}
