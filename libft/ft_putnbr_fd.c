/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 16:01:42 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/07 11:13:19 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	int number[11];
	int counter;
	int check_zero;
	int check_neg;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	check_neg = (n < 0);
	check_zero = (n % 10 == 0);
	counter = 0;
	while (n != 0)
	{
		number[counter++] = n % 10;
		if (check_neg)
			number[counter - 1] *= -1;
		n /= 10;
	}
	counter--;
	if (check_neg)
		ft_putchar_fd('-', fd);
	while (counter >= 0)
		ft_putchar_fd((number[counter--]) + '0', fd);
}
