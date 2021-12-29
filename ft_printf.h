#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int	ft_printf(const char *fmt, ...)
static void	check_fmt(va_list ap, const char *fmt,size_t *len)
static void	check_conversion(va_list *ap, const char c, size_t *len)
static void	check_int(int ascii, const char c, size_t *len)
static void	check_ui(unsigned int ascii, const char c, *len)


#endif
