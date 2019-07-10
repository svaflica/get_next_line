/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:46:30 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 11:50:52 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		iter;

	if (s == NULL || f == NULL)
		return (NULL);
	if (!(res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	iter = 0;
	while (s[iter])
	{
		res[iter] = f(s[iter]);
		iter++;
	}
	res[iter] = s[iter];
	return (res);
}
