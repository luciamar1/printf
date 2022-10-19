#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

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

    //     ft_printf(" %s", "");
    //     ft_printf("%s ", "");
    //     ft_printf(" %s ", "");
    //     ft_printf(" %s ", "-");
    //     ft_printf(" %s %s ", "", "-");
    //     ft_printf(" %s %s ", " - ", "");
    //    // ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
    //     ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
        // ft_printf("mia == NULL %s NULL \n", NULL);
        // printf("real == NULL %s NULL \n", NULL);

    // ft_printf("%d\n", ft_printf("%c", '0'));
    // ft_printf("%d\n",  ft_printf(" %c", '0'));
    // ft_printf("%d\n",  ft_printf(" %c", '0' - 256));
    // ft_printf("%d\n", ft_printf("%c", '0' + 256));
    // ft_printf("%d\n", ft_printf(" %c %c %c ", '0', 0, '1'));
    // ft_printf("%d\n", ft_printf(" %c %c %c ", ' ', ' ', ' '));
    // ft_printf("%d\n", ft_printf(" %c %c %c ", '1', '2', '3'));
    // ft_printf("%d\n", ft_printf(" %c %c %c ", '2', '1', 0));
    // ft_printf("%d\n",  ft_printf(" %c %c %c ", 0, '1', '2'));

        //printf("numer real = %d", printf("mia == %p ", 16));
        //  ft_printf("mia == %p ", -1);
        //printf("numer real = %d\n", ft_printf("mia == %p ", -1));
        //printf("numer real = %d\n", printf("real == %p ", -1));
        // ft_printf("mia == %p ", 15);
        // ft_printf("mia == %p ", 16);
        // ft_printf("mia == %p ", 17);
        // ft_printf("mia == %p %p ", LONG_MIN, LONG_MAX);
        // ft_printf("mia == %p %p ", INT_MIN, INT_MAX);
        // ft_printf("mia == %p %p ", ULONG_MAX, -ULONG_MAX);
        // ft_printf("mia == %p %p ", 0, 0);
        // printf("real == %p ", -1);
        // printf("real == %p ", 1);
        // printf("real == %p ", 15);
        // printf("real == %p ", 16);
        // printf("real == %p ", 17);
        // printf("real == %p %p ", LONG_MIN, LONG_MAX);
        // printf("real == %p %p ", INT_MIN, INT_MAX);
        // printf("real == %p %p ", ULONG_MAX, -ULONG_MAX);
        // printf("real == %p %p ", 0, 0);
        /*
        printf("\nvalor == %d\n",ft_printf("printeo == %u ", 0));
        printf("\nvalor == %d\n",ft_printf("printeo == %u ", -1));
        printf("\nvalor == %d\n",ft_printf("printeo == %u ", 1));
        printf("\nvalor == %d\n",ft_printf("printeo == %u ", 9));
        printf("\nvalor == %d\n",ft_printf("printeo == %u ", 10));
        printf("\nvalor == %d\n",ft_printf("printeo == %u ", 11));
        printf("\nvalor == %d\n",ft_printf("printeo == %u ", 15));
        printf("\nvalor == %d\n",ft_printf("printeo == %u ", 16));
        printf("\nvalor == %d\n",ft_printf("printeo == %u ", 17));
         printf("\nvalor == %d\n",ft_printf("printeo == %u ", 99));
         printf("\nvalor == %d\n",ft_printf("printeo == %u ", 100));
         printf("\nvalor == %d\n",ft_printf("printeo == %u ", 101));
         printf("\nvalor == %d\n",ft_printf("printeo == %u ", -9));
         printf("\nvalor == %d\n",ft_printf("printeo == %u ", -10));
         printf("\nvalor == %d\n",ft_printf("printeo == %u ", -11));
         printf("\nvalor == %d\n",ft_printf("printeo == %u ", -14));
         printf("\nvalor == %d\n",ft_printf("printeo == %u ", -15));
         printf("\nvalor == %d\n",ft_printf("printeo == %u ", -16));
         printf("\nvalor == %d\n",ft_printf("printeo == %u ", -99));
         printf("\nvalor == %d\n",ft_printf("printeo == %u ", -100));
         printf("\nvalor == %d\n",ft_printf("printeo == %u ", -101));*/
         /*printf("%d",printf(" %u ", INT_MAX));
         printf("%d",printf(" %u ", INT_MIN));
         printf("%d",printf(" %u ", LONG_MAX));
         printf("%d",printf(" %u ", LONG_MIN));
         printf("%d",printf(" %u ", UINT_MAX));
         printf("%d",printf(" %u ", ULONG_MAX));*/
         //printf("%d",printf(" %u ", 9223372036854775807LL));
         //printf("%d",printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
                printf("\nvalor == %d\n", ft_printf("    printeo == %x ", 0));
        printf("\nvalor == %d\n", ft_printf("    printeo == %x ", -1));
        printf("\nvalor == %d\n", ft_printf("    printeo == %x ", 1));
        printf("\nvalor == %d\n", ft_printf("    printeo == %x ", 9));
        printf("\nvalor == %d\n", ft_printf("    printeo == %x ", 10));
        printf("\nvalor == %d\n", ft_printf("    printeo == %x ", 11));
        printf("\nvalor == %d\n", ft_printf("    printeo == %x ", 15));
        printf("\nvalor == %d\n", ft_printf("    printeo == %x ", 16));
        printf("\nvalor == %d\n", ft_printf("    printeo == %x ", 17));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", 99));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", 100));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", 101));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", -9));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", -10));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", -11));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", -14));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", -15));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", -16));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", -99));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", -100));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", -101));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", INT_MAX));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", INT_MIN));
        //printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", LONG_MAX));
        //printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", LONG_MIN));
        //printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", UINT_MAX));
        //printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", ULONG_MAX));
        //printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", 9223372036854775807LL));
        //printf("\nvalor == %d\n",  ft_printf("    printeo == %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", 42));
        printf("\nvalor == %d\n",  ft_printf("    printeo == %x ", -42));
    return(0);
}
