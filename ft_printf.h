#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>

int		ft_printf(const char *fmt, ...);
size_t	ft_putchar_len(int c);
size_t	ft_putaddress_len(unsigned long long c);
size_t	ft_putnbr_len(long long int nb);
size_t	ft_putstr_len(char *str);
size_t	ft_putnbr_convert_base(unsigned long long nb, char *base);

#endif
