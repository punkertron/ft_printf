#include "ft_printf.h"

void	ft_fill_c(t_flags **flags, char **copy, char c)
{
	int	a;

	a = -1;
	if ((*flags)->flag == -1)
	{
		(*copy)[++a] = c;
		while (++a <= (*flags)->width - 1)
			(*copy)[a] = ' ';
		(*copy)[a] = '\0';
	}
	else
	{
		while (++a < (*flags)->width - 1)
			(*copy)[a] = ' ';
		(*copy)[a] = c;
		(*copy)[++a] = '\0';
	}
}

int	ft_copy_c(va_list *ap, t_flags **flags)
{
	int		a;
	char	c;

	a = 0;
	c = va_arg(*ap, int);
	if ((*flags)->flag == -3)
		return (ft_fill_zero_c(flags, c));
	if ((*flags)->flag == -1)
	{
		ft_putchar(c);
		while (++a <= (*flags)->width - 1)
			ft_putchar(' ');
	}
	else
	{
		while (++a <= (*flags)->width - 1)
			ft_putchar(' ');
		ft_putchar(c);
	}
	free(*flags);
	return (a);
}

int	ft_fill_zero_c(t_flags **flags, char c)
{
	int	a;

	a = 1;
	while (a < (*flags)->width)
	{
		ft_putchar('0');
		a++;
	}
	ft_putchar(c);
	free(*flags);
	return (a);
}
