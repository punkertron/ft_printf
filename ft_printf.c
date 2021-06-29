#include "ft_printf.h"
#include <stdio.h>

int		ft_printf(const char *format, ...)
{
	va_list	ap;
	ssize_t	a;
	ssize_t	q;
	char	*str;
	char	*tmp;

	str = ft_strdup(format);
	tmp = str;
	a = 0;
	va_start(ap, format);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			q = a;
			a += ft_format(&str, &ap, a);
			if (q > a)
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
	free(tmp);
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
	flags->width = ft_get_width(ap, str);
	flags->precision = ft_get_precision(ap, str);
	flags->type = ft_get_type(str);
	/*
	printf("\nflag = %d", flags->flag);
	printf("\nwidth = %d", flags->width);
	printf("\nprecision = %d", flags->precision);
	printf("\ntype = %d", flags->type);*/
//	printf("\nstr = |%s|", *str);

	return (ft_next(ap, &flags, a));
}

ssize_t	ft_next(va_list *ap, t_flags **flags, ssize_t a)
{
	char 	*copy;
	int		q;

	if ((*flags)->type == 1)
		copy = ft_copy_c(ap, *flags);
	else if ((*flags)->type == 2)
		copy = ft_copy_s(ap, *flags);
	else if ((*flags)->type == 3)
		copy = ft_copy_c(ap, *flags);
	else if ((*flags)->type == 1)
		copy = ft_copy_c(ap, *flags);
	else if ((*flags)->type == 1)
		copy = ft_copy_c(ap, *flags);
	else if ((*flags)->type == 1)
		copy = ft_copy_c(ap, *flags);
		
	ft_putstr_fd(copy, 1);
//	printf("\ncopy = |%s|", copy);
	q = ft_strlen(copy);
	free(copy);
	free(*flags);
	(void) a;
	return (q);
}
