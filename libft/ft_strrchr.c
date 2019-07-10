/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 10:59:58 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 11:17:52 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int iter;

	iter = ft_strlen(s);
	while (iter >= 0)
	{
		if (s[iter] == (char)c)
			return ((char *)(s + iter));
		iter--;
	}
	return (NULL);
}
