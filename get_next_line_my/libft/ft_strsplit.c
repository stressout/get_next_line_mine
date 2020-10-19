/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 19:06:02 by mkeel             #+#    #+#             */
/*   Updated: 2019/04/23 23:33:14 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_del_memory(char **ap, size_t i_str)
{
	if (!ap || !i_str)
		return (0);
	else
	{
		while (i_str--)
		{
			free(*ap);
			*ap = NULL;
		}
		free(ap);
		ap = NULL;
		return (NULL);
	}
}

static char		**ft_doing_pls(char **str, char const *s, char c, size_t out)
{
	size_t		in;
	size_t		i_str;

	in = 0;
	i_str = 0;
	while (s)
	{
		while (s[out] == c)
			out++;
		in = out;
		while (s[out] && (s[out] != c))
			out++;
		if (out > in)
		{
			if (!(str[i_str] = ft_strndup(s + in, out - in)))
				return (str = ft_del_memory(str, i_str));
			i_str++;
		}
		if (s[out] == '\0')
		{
			str[i_str] = 0;
			return (str);
		}
	}
	return (0);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		out;
	char		**str;

	out = 0;
	if (s)
	{
		if (!(str = (char**)malloc(sizeof(char*) * (ft_find_word(s, c)) + 1)))
			return (0);
		str = ft_doing_pls(str, s, c, out);
		return (str);
	}
	return (0);
}
