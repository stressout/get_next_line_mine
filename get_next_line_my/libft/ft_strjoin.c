/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:04:32 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/22 23:04:40 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t		all_s;
	char		*new;
	size_t		i;
	size_t		j;

	if (s1 && s2)
	{
		all_s = ft_strlen(s1) + ft_strlen(s2);
		if (!(new = ft_strnew(all_s)))
			return (0);
		i = -1;
		j = -1;
		while (s1[++i] != '\0')
			new[i] = s1[i];
		while (s2[++j] != '\0')
			new[i + j] = s2[j];
		new[i + j] = '\0';
		return (new);
	}
	return (0);
}
