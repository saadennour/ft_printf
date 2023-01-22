/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:59:13 by sfarhan           #+#    #+#             */
/*   Updated: 2021/12/04 22:00:05 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(int n, char x)
{
	unsigned int	nb;
	char			*base;
	int				i;

	i = 0;
	nb = n;
	if (x == 'X')
		base = "0123456789ABCDEF";
	else if (x == 'x')
		base = "0123456789abcdef";
	if (nb >= 16)
	{
		i += ft_puthex(nb / 16, x);
		i += ft_puthex(nb % 16, x);
	}
	else
		i += ft_putchar(base[nb]);
	return (i);
}
