/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 00:28:36 by sfarhan           #+#    #+#             */
/*   Updated: 2021/12/05 00:07:25 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putnbr_u(unsigned int nbr);
int		ft_putchar(int c);
int		ft_putnbr(int nb);
int		ft_putstr(char *str);
size_t	ft_strlen(const char *str);
int		count(long int n);
int		ft_puthex(int n, char x);
int		ft_putadd(unsigned long n);

#endif
