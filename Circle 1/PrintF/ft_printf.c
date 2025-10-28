/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:50:13 by vaguayo-          #+#    #+#             */
/*   Updated: 2025/10/27 13:12:42 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int    ft_dispatcher(char format, va_list args)
{
    if (format == 'c')
    {
        ft_putchar((char)va_args(args,char))
    }
    else if (format == 's')
        return(ft_print_stings(va_args(args, char *)));
    else if (format == 'd' || format == 'i')
        return(ft_print_decimal(va_args(args, int)))
    else if (format == 'u')
        return (ft_print_unsigned(args));
    else if (format == 'x' || spec == 'X')
        return (ft_print_hex(args, format));
    else if (format == 'p')
        return (ft_print_pointer(args));
    else if (format == '%')
        return (ft_putchar('%'));
    return (0);
       
}

int ft_printf(char const *format, ...)
{
    int	count;
    va_list args;
    va_start(args, format);

    count = 0;
    while (format[count])
    {
        if (format[count] == '%')
            count += ft_dispatcher(format[count],va_list);
        else
            count += ft_putchar(format[count])

    }
    va_end(args)
}



