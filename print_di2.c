#include "ft_printf.h"

char	*ft_fill_di_zero(char **copy, char **tmp, t_flags *flags, int a)
{
	int	q;
	int	r;

	q = -1;
	r = -1;
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
		ft_fill_di_end(copy, *tmp, flags, a);
	free(*tmp);
	return (*copy);
}

void	ft_fill_di_end(char **copy, char *tmp, t_flags *flags, int a)
{
	int	t;
	int	p;
	int	h;

	h = ft_quantity_di(flags, tmp, a);
	p = flags->precision;
	t = ft_strlen(tmp);
	(*copy)[h + 1] = '\0';
	while (t > -1)
	{
		(*copy)[h] = tmp[t];
		h--;
		t--;
	}
	while (p-- > (int)ft_strlen(tmp))
		(*copy)[h--] = '0';
	if (a < 0)
		(*copy)[h--] = '-';
	while ((flags->width)-- > flags->precision && h >= 0)
		(*copy)[h--] = ' ';
}

char	*ft_fill_pres_zero(char **copy, char**tmp, t_flags *flags)
{
	int	a;

	free(*tmp);
	free(*copy);
	*copy = malloc(sizeof(char) * (flags->width + 1));
	if (!(*copy))
		return (NULL);
	a = 0;
	while (a < flags->width)
	{
		(*copy)[a] = ' ';
		a++;
	}
	(*copy)[a] = '\0';
	return (*copy);
}