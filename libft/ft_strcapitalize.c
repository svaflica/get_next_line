/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:57:06 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 21:12:23 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	char *str1;

	str1 = str;
	while (*str1)
	{
		if (ft_isdigit(*str1) || ft_isalpha(*str1))
		{
			if (ft_islower(*str1))
				*str1 = *str1 - 32;
			str1++;
			while (ft_isdigit(*str1) || ft_isalpha(*str1))
			{
				if (ft_isupper(*str1))
					*str1 = *str1 + 32;
				str1++;
			}
		}
		str1++;
	}
	return (str);
}
