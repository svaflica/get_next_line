/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:13:28 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 11:14:40 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	while (*tmp_s1 == *tmp_s2 && *tmp_s1 && *tmp_s2)
	{
		tmp_s1++;
		tmp_s2++;
	}
	return ((int)(*tmp_s1 - *tmp_s2));
}
