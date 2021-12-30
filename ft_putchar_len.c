#include "ft_printf.h"

void	ft_putchar_len(int c, size_t *len)
{
	len += write(1, &c, 1);
}
