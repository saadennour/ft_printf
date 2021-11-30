/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarhan <sfarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:29:15 by sfarhan           #+#    #+#             */
/*   Updated: 2021/12/01 00:17:41 by sfarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

int ft_printf(const char *str, ...)
{
    va_list args;
    char    *s;
    char c;
    const char  *p;
    int     i;
    int     j = 0;

    i = 0;
    s = (char *)str;
    va_start (args,str);
    
    while (*s != '\0')
    {
        while (*s != '%')
        {
            ft_putchar(*s);
            s++;
            i++;
        }
        s++;
        if (*s == 's')
        {
            p = (const char *)  va_arg(args, const char *);
            while (*p)
            {
                ft_putchar(*p);
                p++;
                s++;
                i++;
            }
        }
        else if (*s == 'c')
        {
            // c = (const char) va_arg(args, const char *);
            ft_putchar(va_arg(args,int));
            i++;
            s++;
        }
        else if (*s == 'd')
        {
            //j = (int) va_arg(args, int);
            ft_putnbr(va_arg(args,int));
            i++;
            s++;
        }
        else if (*s == 'x')
        {
            //j = (int) va_arg(args, int);
            ft_putnbr_base(va_arg(args,int), "0123456789abcdef");
            i++;
            s++;
        }
        else if (*s == 'X')
        {
            //j = (int) va_arg(args, int);
            ft_putnbr_base(va_arg(args,int), "0123456789ABCDEF");
            i++;
            s++;
        }
        else if (*s == 'i')
        {
            ft_putnbr_base(va_arg(args,int), "0123456789");
            i++;
            s++;
        }
    }
    va_end(args);
    return i;
}

// int main()
// {
//     int i = 0;
//     int j = -62;
//     // scanf("%i", &j);
//     i = ft_printf("Begin %u", j);
//     //scanf("%d", &i);
//     //printf ("%u", j);
// }