/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:22:18 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 20:25:44 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	return ((unsigned char)c == '\t' || (unsigned char)c == '\n' ||
			(unsigned char)c == '\v' || (unsigned char)c == '\f' ||
			(unsigned char)c == '\r' || (unsigned char)c == ' ');
}
