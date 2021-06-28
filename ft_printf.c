#include "ft_printf.h"
#include <stdio.h>

int		ft_printf(const char *format, ...)
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
			a += ft_format(&str, &ap, a);
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

ssize_t	ft_format(char **str, va_list *ap, ssize_t a)
{
	t_flags	*flags;

	if (**str == '%')
	{
		ft_putchar(**str);
		(*str)++;
		return (1);
	}
	flags = malloc(sizeof(t_flags));
	if (!flags)
	{
		va_end(*ap);
		return (-10);
	}
	flags->flag = ft_get_flag(str);
//	printf("\nflag = %d", flags->flag);
	flags->width = ft_get_width(str);
//	printf("\nwidth = %d", flags->width);
	flags->precision = ft_get_precision(str);
//	printf("\nprecision = %d", flags->precision);
	flags->type = ft_get_type(str); // 1 - minus, 0 - plus
//	printf("\ntype = %d", flags->type);
//	printf("\nstr = |%s|", *str);

	return (ft_next(ap, &flags, a));
}

ssize_t	ft_next(va_list *ap, t_flags **flags, ssize_t a)
{
	char *copy;

	if ((*flags)->type == 1)
		copy = ft_copy_c(ap, *flags);
	else if ((*flags)->type == 1)
		copy = ft_copy_c(ap, *flags);
	else if ((*flags)->type == 1)
		copy = ft_copy_c(ap, *flags);
	else if ((*flags)->type == 1)
		copy = ft_copy_c(ap, *flags);
	else if ((*flags)->type == 1)
		copy = ft_copy_c(ap, *flags);
	else if ((*flags)->type == 1)
		copy = ft_copy_c(ap, *flags);
		
	printf("\ncopy = |%s|", copy);
	(void) copy;
	(void) ap;
	(void) flags;
	(void) a;
	return (0);
}
