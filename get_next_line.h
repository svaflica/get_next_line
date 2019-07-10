/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 10:07:32 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/14 14:43:01 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/includes/libft.h"
# include <stdlib.h>

# define BUFF_SIZE 10000

typedef struct	s_storage
{
	int			buf_size;
	int			work;
	char		*buf;
	char		*newl;
}				t_stor;

int				get_next_line(const int fd, char **line);

#endif
