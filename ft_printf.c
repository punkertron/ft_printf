#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	ssize_t	a;
	ssize_t	q;
	char	*str;

	str = ft_strdup(format);
	a = 0;

	va_start(ap, format);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			q = a;
			a += ft_format(&str, &ap);
			if (q < a)
				return (-1);
		}
		else
		{
			ft_putchar(*str);
			str++;
			a++;
		}
	}
	va_end(ap);
	return (a);
}

ssize_t	ft_format(char **str, va_list *ap)
{
	int		a;
	t_flags	*flags;

	a = 0;
	flags = malloc(sizeof(t_flags));
	if (!flags)
	{
		va_end(*ap);
		return (-10);
	}
	if (**str == '%')
	{
		ft_putchar(**str);
		(*str)++;
		a = 1;
	}
	flags->flag = ft_get_flag(str);
	printf("\nflag = %d", flags->flag);
	//printf("\nstr = |%s|", *str);
	flags->width = ft_get_width(str);
	printf("\nwidth = %d", flags->width);
	//printf("\nstr = |%s|", *str);
	flags->precision = ft_get_precision(str);
	printf("\nprecision = %d", flags->precision);
	//printf("\nstr = |%s|", *str);
	flags->type = ft_get_type(str); // 1 - minus, 0 - plus
	printf("\ntype = %d", flags->type);
	printf("\nstr = |%s|", *str);
	(void) ap;
	(void) flags;
	return (a);
}
