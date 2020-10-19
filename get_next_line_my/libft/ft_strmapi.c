/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:04:55 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/21 19:04:56 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	s1 = NULL;
	i = 0;
	if (s && f)
	{
		if (!(s1 = ft_strnew(ft_strlen(s))))
			return (0);
		while (s[i] != '\0')
		{
			s1[i] = f(i, s[i]);
			i++;
		}
	}
	return (s1);
}
