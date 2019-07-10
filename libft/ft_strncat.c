/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:21:01 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 11:16:24 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		iter;
	size_t	iter2;

	iter = ft_strlen(s1);
	iter2 = 0;
	while (s2[iter2] && iter2 < n)
	{
		s1[iter] = s2[iter2];
		iter++;
		iter2++;
	}
	s1[iter] = '\0';
	return (s1);
}
