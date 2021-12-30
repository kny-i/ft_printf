#include "ft_printf.h"

void		ft_putnbr_conveert_base(int nb, char *base)
{
	int		len;

	len = 0;
	while (base[len])
		len += 1;
	if (nb >= len)
	{
		ft_putnbr_conveert_base(nb / len, base);
		ft_putnbr_conveert_base(nb % len, base);
	}
	else
		ft_putchar_len(base[nb]);
}
