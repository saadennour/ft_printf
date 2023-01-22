/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:57:14 by sfarhan           #+#    #+#             */
/*   Updated: 2021/12/04 21:58:53 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadd(unsigned long n)
{
	char	*base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		i += ft_putadd(n / 16);
		i += ft_putadd(n % 16);
	}
	else
		i += ft_putchar(base[n]);
	return (i);
}
