/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:19:41 by sfarhan           #+#    #+#             */
/*   Updated: 2021/12/01 00:18:29 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putnbr(int nb)
{
	unsigned int	a;

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
		write (1, &a, 1);
	}
}
/*int main()
{
	int nb;
	nb =  -2147483648;
	ft_putnbr(nb);
}*/
