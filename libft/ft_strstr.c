/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:57:40 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 11:18:07 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int len;
	int len_needle;
	int temp;

	len = 0;
	len_needle = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[len])
	{
		if (haystack[len] == needle[len_needle])
		{
			temp = len;
			while (haystack[temp++] == needle[len_needle++])
			{
				if (!needle[len_needle])
					return ((char *)(haystack + len));
			}
			temp = 0;
			len_needle = 0;
		}
		len++;
	}
	return (NULL);
}
