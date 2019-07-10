/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:22:54 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 11:25:40 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int iter;

	if (s == NULL || f == NULL)
		return ;
	iter = 0;
	while (*s)
	{
		f(iter, s);
		iter++;
		s++;
	}
}
