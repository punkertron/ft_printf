#include "ft_printf.h"

int	ft_quantity_di(t_flags *flags, char *tmp, int a)
{
	int	q;

	q = ft_strlen(tmp);
	if (a < 0)
		q += 1;
	if (q >= flags->width && q >= flags->precision)
		return (q);
	else
	{
		if (flags->width >= flags->precision)
			return (flags->width);
		else
			return (flags->precision);
	}
}

void	ft_fill_di2(char **copy, char *tmp, t_flags *flags, int a)
{
	int	i;
	int	r;

	r = -1;
	i = -1;
	if (a < 0)
		(*copy)[++i] = '-';
	while (flags->precision - (++i) + 1 * (a < 0) > (int)ft_strlen(tmp))
		(*copy)[i] = '0';
	while (tmp[++r])
		(*copy)[i++] = tmp[r];
	(*copy)[i] = '\0';
}

void	ft_fill_di3(char **copy, char *tmp, t_flags *flags, int a)
{
	int	m;

	ft_fill_di2(copy, tmp, flags, a);
	m = ft_strlen(*copy);
	while (m < flags->width)
		(*copy)[m++] = ' ';
	(*copy)[m] = '\0';
}

void	ft_fill_di(char **copy, char *tmp, t_flags *flags, int a)
{
	int		i;
	char	*save;

	i = -1;
	if (flags->width > (int)ft_strlen(tmp) + 1 * (a < 0)
		&& flags->width > flags->precision)
	{
		if (flags->flag == -1)
			ft_fill_di3(copy, tmp, flags, a);
		else
		{
			while (flags->width - ft_fill_t(flags, tmp, a) > ++i)
				(*copy)[i] = ' ';
			save = (*copy);
			(*copy) = (*copy) + i;
			ft_fill_di2(copy, tmp, flags, a);
			(*copy) = save;
		}
	}
	else
		ft_fill_di2(copy, tmp, flags, a);
}

char	*ft_copy_di(va_list *ap, t_flags *flags)
{
	char	*copy;
	char	*tmp;
	int		a;

	a = va_arg(*ap, int);
	if (flags->precision == 0 && flags->width == 0)
		return (ft_strdup(""));
	tmp = ft_itoa_new(a);
	if (!tmp)
		return (NULL);
	copy = malloc(sizeof(char) * (ft_quantity_di(flags, tmp, a) + 1));
	if (!copy)
		return (NULL);
	ft_fill_di(&copy, tmp, flags, a);
	free(tmp);
	return (copy);
}
