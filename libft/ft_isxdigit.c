/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:33:45 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 20:45:20 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isxdigit(int c)
{
	return (((unsigned char)c >= 'A' && (unsigned char)c <= 'F') ||
			((unsigned char)c >= 'a' && (unsigned char)c <= 'f') ||
			((unsigned char)c >= '0' && (unsigned char)c <= '9'));
}
