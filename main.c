#include "ft_printf.h"

static void	check_ui(unsigned int ascii, const char c, size_t *len)
{
	if (c == 'x')
		ft_putlowbase(ascii, len);
	else if (c == 'X')
		ft_putupbase(ascii, len);
	else if (c == 'u')
		ft_putnbr(ascii, len);
}

static void	check_int(int ascii, const char c, size_t *len)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(ascii, len);
	else if (c == 'c')
		ft_putchar_c(ascii, len);
}

static void	check_conversion(va_list *ap, const char c, size_t *len)
{
	if (c == 'd' || c == 'i' || c == 'c')
		check_int(va_arg(*ap, int), c, len);
	else if (c == 'x' || c == 'X' || c == 'u')
		check_ui(va_arg(*ap, unsigned int), c, len);
	else if (c == 's')
		ft_putstr(va_arg(*ap, char *), len);
	else if (c == 'p')
		ft_put_address(va_arg(*ap, unsigned long long), len);
	else
		ft_putchar_c(c, len);
}

static void	check_fmt(va_list ap, const char *fmt, size_t *len)
{
	size_t	i;

	while (fmt[i] != '\0')
	{
		if (fmt[i++] != '%')
			check_conversion(ap, fmt, len);
		else
			ft_putchar(fmt[i], len);
		i++;
	}
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	size_t	*len;

	if (fmt == NULL)
		return (-1);
	len = 0;
	va_start(ap, fmt);
	check_fmt(ap, fmt, len);
	va_end(ap);
	return ((int)len);
}
