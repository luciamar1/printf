#include "ft_printf.h"

int    wall_happen(va_list *args, char happen)
{
    if (happen == 'd' || happen == 'i')
        return (ft_putnbr(va_arg(*args, int)));
    else if (happen == 'c')
        return (ft_putchar(va_arg(*args, int))); 
    else if (happen == 's')
        return (ft_putstr(va_arg(*args, const char *)));
    else if (happen == 'p') ///LO TENGO QUE HACER YOYOOOOOOOOOOOOO
        return (ft_putnbr_base((unsigned long)va_arg(*args, void *), "0123456789abcdef"));///HAY QUE PONER LO DE 0X iuxx%
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

int    ft_printf(const char *s, ...)
{
    va_list args;
    int l;
    int countch;

    countch = 0;
    l = 0;
    va_start(args, s);
    if (!s)
        write(1, "ERROR", 6);
    l = ft_strlen(s);
    while(*s)
        if (*(s++) == '%')
            countch += wall_happen(args, *s);
    else 
        countch += write(1, s-l, l + 1);
    return (countch);
}