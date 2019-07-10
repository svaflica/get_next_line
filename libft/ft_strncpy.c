/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 10:57:23 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 11:16:54 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int iter;

	iter = 0;
	while (src[iter] != '\0')
	{
		if (len--)
			dst[iter] = src[iter];
		else
			return (dst);
		iter++;
	}
	while (len--)
		dst[iter++] = '\0';
	return (dst);
}
