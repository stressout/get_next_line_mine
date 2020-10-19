/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 23:15:22 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/23 23:17:21 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_find_word(char const *s, char delim)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		while (s[i] == delim)
			i++;
		if (s[i] != '\0')
			word++;
		while (s[i] && s[i] != delim)
			i++;
	}
	return (word);
}
