#include "ft_printf.h"

char	*ft_di_zero_u(char **copy, char **tmp, t_flags *flags, unsigned int a)
{
	int	q;
	int	r;

	q = -1;
	r = -1;
	if (flags->precision == -2)
	{
		while ((flags->width)-- >= (int)ft_strlen(*tmp))
			(*copy)[++q] = '0';
		while ((*tmp)[++r])
			(*copy)[++q] = (*tmp)[r];
		q++;
		(*copy)[q] = '\0';
	}
	else
		ft_di_end_u(copy, *tmp, flags, a);
	free(*tmp);
	return (*copy);
}

void	ft_di_end_u(char **copy, char *tmp, t_flags *flags, unsigned int a)
{
	int	t;
	int	p;
	int	h;

	h = ft_quantity_di_u(flags, tmp, a);
	p = flags->precision;
	t = ft_strlen(tmp) - 1;
	(*copy)[h + 1] = '\0';
	while (t > -1)
	{
		(*copy)[h] = tmp[t];
		h--;
		t--;
	}
	while (p-- > (int)ft_strlen(tmp))
		(*copy)[h--] = '0';
	while ((flags->width)-- > flags->precision && h >= 0)
		(*copy)[h--] = ' ';
}
