/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:05:15 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 16:58:46 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	int		len_needle;
	size_t	temp;

	n = 0;
	len_needle = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[n] && n < len)
	{
		if (haystack[n] == needle[len_needle])
		{
			temp = n;
			while (temp < len && haystack[temp++] == needle[len_needle++])
			{
				if (!needle[len_needle])
					return ((char *)(haystack + n));
			}
			temp = 0;
			len_needle = 0;
		}
		n++;
	}
	return (NULL);
}
