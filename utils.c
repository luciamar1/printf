#include "ft_printf.h"

void    put_char(char a)
{
        write(1, &a, 1);
        return (1);
}

size_t  ft_strlen(const char *s)
{
        size_t  l;

        l = 0;
        while (s[l])
                l++;
        return (l);
}

void    ft_putnbr(int nb)
{
        long int        n;

        n = nb;
        if (n < 0)
        {
                write(1, "-", 1);
                n *= -1;
        }
        if (n > 9)
                ft_putnbr((n / 10));
        put_char('0' + n % 10);
    return(1);
}

void    ft_putstr(char *s)
{
    int l;
    if (!s)
        return ((void) NULL);
    l = 0;
    while (*s)
    {
        write(1, s++, 1);
        l++;
    }
    return(l);
}

