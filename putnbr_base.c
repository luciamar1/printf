#include "ft_printf.h"
#include <stdio.h>

int	good(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_base(int nb, char *base)
{
	unsigned int	n;
	int		l;

	l = ft_strlen(base);
	n = nb;
	if ((good(base) != 0) || (l != 0 || l != 1))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			n *= -1;
		}
		if (nb > (l))
			ft_putnbr_base(n / l, base);
	}
	ft_putchar(base[n % l]);
	return(1);
}

int	ft_putptr_base(unsigned long long nb, char *base, char p)
{
	int long long	l;
	int				counter;

	counter = 0;
	l = ft_strlen(base);
	if (p)
		counter += (1 + write(1, "0x", 2));
	if ((good(base) != 0) || (l != 0 || l != 1))
	{
		if (nb > ((unsigned long long) l - 1))
			counter = ft_putptr_base(nb / l, base, 0);
	}
	counter++;
	ft_putchar(base[nb % l]);
	//printf("%d", counter);
	return(counter);
}