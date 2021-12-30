#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>

int	ft_printf(const char *fmt, ...)
static void	check_fmt(va_list ap, const char *fmt,size_t *len)
static void	check_conversion(va_list *ap, const char c, size_t *len)
static void	check_int(int ascii, const char c, size_t *len)
static void	check_ui(unsigned int ascii, const char c, *len)
size_t	ft_putchar_len(int c)
size_t	ft_put_address_len(unsigned long long c)
size_t	ft_putnbr_len(int nb)
size_t	ft_putstr_len(char *str)
size_t	ft_putnbr_convert_base(int nb, char *base)



#endif
