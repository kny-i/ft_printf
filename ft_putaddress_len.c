#include "ft_printf.h"

size_t	ft_put_address_len(unsigned long long c)
{
	size_t	i;

	ft_putstr_len("0x");
	if (!c)
	{
		ft_putchar_len('0');
		len = 3;
		return (i);
	}
	len = ft_putnbr_convert_base(ascii, "0123456789abcdef"); + 2;
	return (i);
}
