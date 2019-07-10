/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:37:13 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 20:43:53 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_alpha(char const *str)
{
	if (str == NULL)
		return (0);
	while (*str)
	{
		if (!ft_isalpha((int)*str))
			return (0);
		str++;
	}
	return (1);
}
