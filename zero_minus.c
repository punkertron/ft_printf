#include "ft_printf.h"

int	ft_check_zero(char c)
{
	return (1 * (c == '0') + 0);
}

int	ft_check_min_zero(char c)
{
	return (1 * (c == '-') + 1 * (c == '0') + 0);
}
