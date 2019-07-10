/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:46:33 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 20:49:49 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_lowercase(char const *str)
{
	if (str == NULL)
		return (0);
	while (*str)
	{
		if (!ft_islower((int)*str))
			return (0);
		str++;
	}
	return (1);
}
