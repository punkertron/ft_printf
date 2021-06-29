#include "ft_printf.h"

int	ft_get_flag(char **str)
{
	int	a;

	a = 1;
	if (**str == '-')
	{
		a = -1;
		(*str)++;
	}
	else if (**str == '0')
	{
		a = 0;
		(*str)++;
	}
	return (a);
}

int	ft_get_width(va_list *ap, char **str)
{
	int	a;

	if (**str == '*')
	{
		a = va_arg(*ap, unsigned int); //flag of *
		(*str)++;
	}
	else
		a = ft_atoi(*str);
	while (ft_isdigit(**str))
		(*str)++;
	return (a);
}

int	ft_get_precision(va_list *ap, char **str)
{
	int	a;

	if (**str == '.')
		(*str)++;
	else
		return(-2); //когда ничего нет
	if (**str == '*')
	{
		a = va_arg(*ap, unsigned int); //flag of *
		(*str)++;
	}
	else
		a = ft_atoi(*str);
	while (ft_isdigit(**str))
		(*str)++;
	return (a);
}

int	ft_get_type(char **str)
{
	int	a;

	a = 0;
	if (**str == 'c')
		a = 1;
	else if (**str == 's')
		a = 2;
	else if (**str == 'p')
		a = 3;
	else if (**str == 'd')
		a = 4;
	else if (**str == 'i')
		a = 5;
	else if (**str == 'u')
		a = 6;
	else if (**str == 'x')
		a = 7;
	else if (**str == 'X')
		a = 8;
	(*str)++;
	return (a);
}
