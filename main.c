#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    // ft_printf("%c\n", '0');
    
    // ft_printf(" %c\n", '0');
    
    // ft_printf(" %c\n", '0' - 256);
    
    // ft_printf("%c\n", '0' + 256);
    
    // ft_printf(" %c %c %c\n ", '0', 0, '1');
    
    // ft_printf(" %c %c %c\n ", ' ', ' ', ' ');
    
    // ft_printf(" %c %c %c\n ", '1', '2', '3');
    
    // ft_printf(" %c %c %c\n ", '2', '1', 0);
    
    // ft_printf(" %c %c %c\n ", 0, '1', '2');

        ft_print(" %s", "");
        ft_print("%s ", "");
        ft_print(" %s ", "");
        ft_print(" %s ", "-");
        ft_print(" %s %s ", "", "-");
        ft_print(" %s %s ", " - ", "");
       // ft_print(" %s %s %s %s %s", " - ", "", "4", "", s2);
        ft_print(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
        ft_print(" NULL %s NULL ", NULL);

    ft_printf("%d\n", ft_printf("%c", '0'));
    ft_printf("%d\n",  ft_printf(" %c", '0'));
    ft_printf("%d\n",  ft_printf(" %c", '0' - 256));
    ft_printf("%d\n", ft_printf("%c", '0' + 256));
    ft_printf("%d\n", ft_printf(" %c %c %c ", '0', 0, '1'));
    ft_printf("%d\n", ft_printf(" %c %c %c ", ' ', ' ', ' '));
    ft_printf("%d\n", ft_printf(" %c %c %c ", '1', '2', '3'));
    ft_printf("%d\n", ft_printf(" %c %c %c ", '2', '1', 0));
    ft_printf("%d\n",  ft_printf(" %c %c %c ", 0, '1', '2'));

    return(0);
}