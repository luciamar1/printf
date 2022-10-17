
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int ft_putnbr(int n);
int ft_putchar(char c);
int ft_putstr(const char *s);
int ft_putnbr_base(int nb, char *base );
size_t  ft_strlen(const char *);
char    ft_printf(const char *s, ...);
int    wall_happen(va_list *args, char happen);

#endif