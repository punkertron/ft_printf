#include "ft_printf.h"

int	ft_fill_t(t_flags *flags, char *tmp, int a)
{
	int	m;

	if (flags->precision > ((int)ft_strlen(tmp) + 1 * (a < 0)))
		m = flags->precision + 1 * (a < 0);
	else
		m = (int)ft_strlen(tmp) + 1 * (a < 0);
	return (m);
}
