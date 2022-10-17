
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int ft_putnbr(int n);
int ft_putchar(char c);
int ft_putstr(const char *s);
int ft_putnbr_base(int nb, char *base );
int  ft_strlen(const char *);
int    ft_printf(char const *s, ...);
int    wall_happen(va_list *args, char happen);

#endif