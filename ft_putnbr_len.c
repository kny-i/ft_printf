#include "ft_printf.h"

static size_t	ft_putnbr_count(int nb)
{
	size_t	i;

	i = 0;
	if (nb == 0)
	{
		i = 1;
		return (i);
	}
	else if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb != 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

size_t	ft_putnbr(int nb)
{
	int		num;
	size_t	i;

	num = 0;
	i = ft_putnbr_count(nb);
	if (nb < 0)
	{
		ft_putchar_len('-');
		if (nb == -2147483648)
		{
			nb /= 10;
			num = nb;
		}
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	if (nb < 10 && nb >= 0)
		ft_putchar_len(nb + '0');
	if (num == -214748364)
		ft_putchar_len(8 + '0');
	return (i);
}
