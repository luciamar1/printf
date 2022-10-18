#include "ft_printf.h"
#include <stdio.h>

int ft_whall_happen(va_list *args, char happen)
{
    if (happen == 'd' || happen == 'i')
        return (ft_putnbr(va_arg(*args, int)));
    else if (happen == 'c')
        return (ft_putchar(va_arg(*args, int))); 
    else if (happen == 's')
        return (ft_putstr(va_arg(*args, const char *)));
    else if (happen == 'p') ///LO TENGO QUE HACER YOYOOOOOOOOOOOOO
        return (ft_putptr_base((unsigned long long)(va_arg(*args, void *)), "0123456789abcdef", 'p'));///HAY QUE PONER LO DE 0X iuxx%
    else if (happen == 'u')
        return (ft_putnbr_base(va_arg(*args, unsigned int), "0123456789"));
    else if (happen == 'x')
		return (ft_putnbr_base(va_arg(*args, unsigned int), "0123456789abcdef"));
	else if (happen == 'X')
		return (ft_putnbr_base (va_arg(*args, unsigned int), "0123456789ABCDEF"));
	else if (happen == '%')
		return (ft_putchar('%'));
    return(0);
}

int    ft_printf(char const *s, ...)
{
    va_list args;
    int countch;

    countch = 0;
    va_start(args, s);
    if (!s)
        write(1, "ERROR", 6);
    while(*s)
    {
        if (*s == '%')
        {
            countch += ft_whall_happen(&args, s[1]);
            s++;
        }
        else 
        {
            write(1, s, 1);
            countch ++;
        }
        if(*s)
            s++;
    }
    //printf("count = %d\n", countch);
    return (countch);
}
