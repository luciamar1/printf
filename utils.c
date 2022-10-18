#include "ft_printf.h"
#include <stdio.h>

int     ft_putchar(char a)
{
        write(1, &a, 1);
        return (1);
}

int  ft_strlen(const char *s)
{
        int  l;

        l = 0;
        while (s[l])
                l++;
        return (l);
}

int     ft_putnbr(int nb)
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
        ft_putchar('0' + n % 10);
        if (nb < 0)
                return(2);
    return(1);
}

int     ft_putstr(const char *s)
{
    int l;
    if (!s)
    {
        write(1, "(null)", 6);
        return(6);
    }
    l = 0;
    while (*s)
    {
        write(1, s++, 1);
        l++;
    }
    return(l);
}

