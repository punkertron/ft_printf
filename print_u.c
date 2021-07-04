#include "ft_printf.h"

int	ft_quantity_di_u(t_flags *flags, char *tmp, unsigned int a)
{
	int	q;

	q = ft_strlen(tmp);
	if (q >= flags->width && q >= flags->precision)
		return (q);
	else
	{
		if (flags->width >= flags->precision)
			return (flags->width);
		else
			return (flags->precision);
	}
	(void) a;
}

void	ft_fill_di2_u(char **copy, char *tmp, t_flags *flags, unsigned int a)
{
	int	i;
	int	r;

	r = -1;
	i = -1;
	while (flags->precision - (++i) > (int)ft_strlen(tmp))
		(*copy)[i] = '0';
	while (tmp[++r])
		(*copy)[i++] = tmp[r];
	(*copy)[i] = '\0';
	(void) a;
}

void	ft_fill_di3_u(char **copy, char *tmp, t_flags *flags, unsigned int a)
{
	int	m;

	ft_fill_di2_u(copy, tmp, flags, a);
	m = ft_strlen(*copy);
	while (m < flags->width)
		(*copy)[m++] = ' ';
	(*copy)[m] = '\0';
}

void	ft_fill_di_u(char **copy, char *tmp, t_flags *flags, unsigned int a)
{
	int		i;
	char	*save;

	i = -1;
	if (flags->width > (int)ft_strlen(tmp)
		&& flags->width > flags->precision)
	{
		if (flags->flag == -1)
			ft_fill_di3_u(copy, tmp, flags, a);
		else
		{
			while (flags->width - ft_fill_t_u(flags, tmp, a) > ++i)
				(*copy)[i] = ' ';
			save = (*copy);
			(*copy) = (*copy) + i;
			ft_fill_di2_u(copy, tmp, flags, a);
			(*copy) = save;
		}
	}
	else
		ft_fill_di2_u(copy, tmp, flags, a);
}

char	*ft_copy_u(va_list *ap, t_flags *flags)
{
	char			*copy;
	char			*tmp;
	unsigned int	a;

	a = va_arg(*ap, unsigned int);
	tmp = ft_itoa_new_u(a);
	if (!tmp)
		return (NULL);
	copy = malloc(sizeof(char) * (ft_quantity_di_u(flags, tmp, a) + 1));
	if (!copy)
		return (NULL);
	if (flags->precision == 0 && tmp[0] == '0' && tmp[1] == '\0')
		return (ft_fill_pres_zero(&copy, &tmp, flags));
	if (flags->flag == -3 && flags->precision != ft_quantity_di_u(flags, tmp, a))
		return (ft_fill_di_zero_u(&copy, &tmp, flags, a));
	ft_fill_di_u(&copy, tmp, flags, a);
	free(tmp);
	return (copy);
}
