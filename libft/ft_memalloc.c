/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:38:31 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/08 10:11:06 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new;

	new = NULL;
	if (size != 0)
	{
		if (!(new = (void *)malloc(size)))
			return (NULL);
		ft_bzero(new, size);
	}
	return (new);
}
