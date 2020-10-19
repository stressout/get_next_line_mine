/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeel <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 22:01:20 by mkeel             #+#    #+#             */
/*   Updated: 2019/06/20 20:14:46 by mkeel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/includes/libft.h"
# define BUFF_SIZE 32
# if BUFF_SIZE <= 0
#  error BUFF_SIZE must be larger than 0
# endif
# define MAX_FD		4864

int		get_next_line(const int fd, char **line);
int		next_mod(int fd, char *str[], char **line);
void	new_or_no(int fd, char *str[]);
#endif
