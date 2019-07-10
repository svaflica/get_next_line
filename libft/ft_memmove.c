/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:45:35 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 11:11:37 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (len == 0)
		return (dst);
	if (tmp_src < tmp_dst)
	{
		i = len;
		while (i-- > 0)
			tmp_dst[i] = tmp_src[i];
	}
	else
	{
		i = 0;
		while (i++ < len)
			tmp_dst[i - 1] = tmp_src[i - 1];
	}
	return (dst);
}
