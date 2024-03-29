/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:19:41 by sfarhan           #+#    #+#             */
/*   Updated: 2021/12/05 01:02:57 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	unsigned int	a;
	int				i;

	i = count(nb);
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	a = nb;
	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
	{
		a += '0';
		ft_putchar(a);
	}
	return (i);
}
