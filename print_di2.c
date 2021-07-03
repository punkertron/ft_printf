#include "ft_printf.h"

char	*ft_fill_di_zero(char **copy, char **tmp, t_flags *flags, int a)
{
	int	q;
	int	r;
	int	h;

	q = -1;
	r = -1;
	h = ft_quantity_di(flags, *tmp, a);
	if (flags->precision == -2)
	{
		if (a < 0)
			(*copy)[++q] = '-';
		while ((flags->width)-- >= (int)ft_strlen(*tmp) + 1 * (a < 0))
			(*copy)[++q] = '0';
		while ((*tmp)[++r])
			(*copy)[q++] = (*tmp)[r];
		(*copy)[q] = '\0';
	}
	else
		ft_fill_di_end(copy, *tmp, flags, h);
	if (a < 0)
		(*copy)[0] = '-';
	free(*tmp);
	return (*copy);
}

void	ft_fill_di_end(char **copy, char *tmp, t_flags *flags, int h)
{
	int	t;
	int	p;

	p = flags->precision;
	t = ft_strlen(tmp);
	(*copy)[h + 1] = '\0';
	while (t)
	{
		(*copy)[h] = tmp[t];
		h--;
		t--;
	}
	while (p-- > (int)ft_strlen(tmp))
		(*copy)[h--] = '0';
}
