/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2files.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 21:32:08 by mkeel             #+#    #+#             */
/*   Updated: 2019/06/20 00:55:25 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int			main(int argc, char **argv)
{
	int		fd1;
	int		ret1;
	char	*line1;

	fd1 = open(argv[1], O_RDONLY);
	while (((ret1 = get_next_line(fd1, &line1)) > 0))
	{
		printf("%s\n", line1);
		free(line1);
	}
	return (0);
}
