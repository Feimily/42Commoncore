#include "ft_printf.h"

int ft_print_stings(va_list args);
{
    char    *str;
    int     i;

    str = va_args(args,char *)
    while (str[i])
        ft_putchar(str[i++])
    return (i)
}

ft_print_decimal(int arg)
{
    long n;
    int i;
    char c;

    n = arg
    count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		count += ft_print_decimal(n / 10);
	c = (n % 10) + '0';
    count += ft_putchar(c);
	return (count);
}

ft_print_unsigned(args);

ft_print_hex(args, format);

ft_print_pointer(args);