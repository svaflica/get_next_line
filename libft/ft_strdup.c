/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:46:22 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/11 10:16:00 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		iter;

	iter = ft_strlen(s1);
	if (!(res = (char *)malloc(sizeof(char) * (iter + 1))))
		return (NULL);
	res[iter--] = '\0';
	while (iter >= 0)
	{
		res[iter] = s1[iter];
		iter--;
	}
	return (res);
}
