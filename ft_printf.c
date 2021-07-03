#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		a;
	char	*str;
	char	*tmp;

	str = ft_strdup(format);
	if (!str)
		return (-1);
	tmp = str;
	va_start(ap, format);
	a = ft_printf_next(&str, &tmp, &ap);
	if (a == -1)
		return (-1);
	va_end(ap);
	free(tmp);
	return (a);
}

int	ft_printf_next(char **str, char **tmp, va_list *ap)
{
	int	a;
	int	q;

	a = 0;
	while (**str)
	{
		if (**str == '%')
		{
			(*str)++;
			q = a;
			a += ft_format(str, ap);
			if (q > a)
			{
				free(*tmp);
				va_end(*ap);
				return (-1);
			}
		}
		else
			ft_putchar_a(str, &a);
	}
	return (a);
}

int	ft_format(char **str, va_list *ap)
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
	ft_check_flags(&flags);
	/*
	printf("\nflag = %d", flags->flag);
	printf("\nwidth = %d", flags->width);
	printf("\nprecision = %d", flags->precision);
	printf("\ntype = %d\n", flags->type);
	*/
	return (ft_next(ap, &flags));
}

int	ft_next(va_list *ap, t_flags **flags)
{
	char	*copy;
	int		q;

	copy = NULL;
	if ((*flags)->type == 1)
		return (ft_copy_c(ap, *flags));
	else if ((*flags)->type == 2)
		copy = ft_copy_s(ap, *flags);
	else if ((*flags)->type == 3)
		copy = ft_copy_p(ap, *flags);
	else if ((*flags)->type == 4)
		copy = ft_copy_di(ap, *flags);
	else if ((*flags)->type == 5)
		copy = ft_copy_u(ap, *flags);
	else if ((*flags)->type == 6 || (*flags)->type == 7)
		copy = ft_copy_x(ap, *flags);
	if (!copy)
	{
		free(*flags);
		return (-1);
	}
	ft_putstr_fd(copy, 1);
	q = ft_strlen(copy);
	free(copy);
	free(*flags);
	return (q);
}
