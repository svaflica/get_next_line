/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 12:06:16 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 19:53:31 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len_without_spaces(char const *s)
{
	int res;
	int iter;

	res = ft_strlen(s);
	iter = 0;
	while (s[iter] == ' ' || s[iter] == '\n' || s[iter] == '\t')
	{
		res--;
		iter++;
	}
	if (res == 0)
		return (0);
	while (s[iter])
		iter++;
	iter--;
	while (s[iter] == ' ' || s[iter] == '\n' || s[iter] == '\t')
	{
		iter--;
		res--;
	}
	return (res);
}

char			*ft_strtrim(char const *s)
{
	char	*res;
	int		len;
	int		iter;
	int		iter2;

	if (s == NULL)
		return (NULL);
	len = len_without_spaces(s);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	iter = 0;
	while (s[iter] == ' ' || s[iter] == '\n' || s[iter] == '\t')
		iter++;
	iter2 = 0;
	while (len--)
		res[iter2++] = s[iter++];
	res[iter2] = '\0';
	return (res);
}
