#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	/*
	va_list	ap;
	va_start(ap, str);
	va_end(ap);
	return (0);
	*/
	char *ptr;
	ptr = ft_strdup(str);
	(void) ptr;
	(void) str;
	return (0);
}
