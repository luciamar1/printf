#include "ft_printf.h"

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

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int	n;
	int				l;

	l = ft_strlen(base);
	n = nb;
	if ((good(base) != 0) || (l != 0 || l != 1))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			n *= -1;
		}
		if (n > l)
			ft_putnbr_base(n / l, base);
	}
	put_char(base[n % l]);
	return(1);
}

