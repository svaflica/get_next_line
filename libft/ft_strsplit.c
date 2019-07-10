/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 12:33:32 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/08 09:59:07 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			num_words(char const *s, char c)
{
	int check;
	int res;

	res = 0;
	check = 0;
	while (*s)
	{
		if ((char)*s != c)
		{
			if (!check)
				res++;
			check = 1;
		}
		else
			check = 0;
		s++;
	}
	return (res);
}

static int			len_words(char const *s, char c)
{
	int res;

	res = 0;
	while ((char)*s != c && *s)
	{
		res++;
		s++;
	}
	return (res);
}

static char const	*cp(char *dst, char const *s, char c)
{
	int iter;

	iter = 0;
	while ((char)*s != c && *s)
	{
		dst[iter] = *s;
		iter++;
		s++;
	}
	return (s);
}

char				**ft_strsplit(char const *s, char c)
{
	int		iter;
	int		iter2;
	char	**res;

	if (s == NULL)
		return (NULL);
	if (!(res = (char **)malloc(sizeof(char *) * (num_words(s, c) + 1))))
		return (NULL);
	iter = 0;
	while (*s)
	{
		iter2 = 0;
		if ((char)*s != c)
		{
			if (!(res[iter] = ft_memalloc(len_words(s, c) + 1)))
				return (NULL);
			s = cp(res[iter], s, c);
			iter++;
		}
		else
			s++;
	}
	res[iter] = NULL;
	return (res);
}
