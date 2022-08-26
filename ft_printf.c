

void    wall_happen(va_list args, char happen)
{
    int count;

    count = 0;
    if (happen == 'd')
        count += write(1, ft_itoa(...), ft_strlen(ft_itoa(...)) + 1);
    else if (happen == 'c')
        count += write(1, ..., 2);
    else if (happen == 's')
        count += write(1, s++, 1);
    else if (happen == 'p')
        count += ft_putnbr_base(..., 16);///HAY QUE PONER LO DE 0X
    return (count);
}

int    ft_printf(char *s, ...)
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
            countch += whall_happen(args, *s);
    else 
        countch += write(1, s-l, l + 1);
    return (countch);
}