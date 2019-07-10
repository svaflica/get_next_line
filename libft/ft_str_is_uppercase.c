/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:54:56 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/08 09:57:24 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_uppercase(char const *str)
{
	if (str == NULL)
		return (0);
	while (*str)
	{
		if (!ft_isupper((int)*str))
			return (0);
		str++;
	}
	return (1);
}
