/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 08:55:40 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 17:06:46 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	iter;
	size_t	iter2;

	iter = 0;
	iter2 = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (ft_strlen(dst) > size)
		return (size + ft_strlen(src));
	while (dst[iter] && iter < size)
		iter++;
	while (src[iter2] && (iter2 + iter + 1) < size)
	{
		dst[iter2 + iter] = src[iter2];
		iter2++;
	}
	dst[iter + iter2] = '\0';
	return (iter + ft_strlen(src));
}
