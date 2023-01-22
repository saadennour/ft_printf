/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:29:15 by sfarhan           #+#    #+#             */
/*   Updated: 2022/11/04 23:00:05 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_draw(const char *s, va_list args)
{
	int	i;

	i = 0;
	if (*s == 's')
		return (i += ft_putstr((va_arg(args, char *))));
	else if (*s == 'c')
		return (i += ft_putchar(va_arg(args, int)));
	else if (*s == 'd' || *s == 'i')
		return (i += ft_putnbr(va_arg(args, int)));
	else if (*s == 'x')
		return (i += ft_puthex(va_arg(args, int), 'x'));
	else if (*s == 'X')
		return (i += ft_puthex(va_arg(args, int), 'X'));
	else if (*s == 'p')
	{
		i += ft_putstr("0x");
		return (i += ft_putadd(va_arg(args, unsigned long)));
	}
	else if (*s == 'u')
		return (i += ft_putnbr_u(va_arg(args, unsigned int)));
	else if (*s == '%')
		return (i += ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start (args, str);
	while (*str)
	{
		if (*str != '%')
			i += ft_putchar (*str++);
		else if (*str == '%')
		{
			str++;
			if (*str == 's' || *str == 'c' || *str == 'p' || *str == 'd'
				|| *str == 'i' || *str == 'u' || *str == 'x'
				|| *str == 'X' || *str == '%')
			{
				i += ft_draw (str, args);
				str++;
			}
		}
	}
	va_end (args);
	return (i);
}

int main()
{
	int i;
	char *s = "%d %s%";
	i = ft_printf(s,"%%",55, "test");
}