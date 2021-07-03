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

int	ft_copy_c(va_list *ap, t_flags *flags)
{
	char	*copy;
	int		a;
	char	c;

	a = 1;
	c = va_arg(*ap, int);
	if (flags->flag == 0)
	{
		ft_putchar(c);
		while (a < flags->width)
		{
			a++;
			
		}
	}
}

/*
char	*ft_copy_c(va_list *ap, t_flags **flags)
{
	char	*copy;
	char	c;
	int		a;

	a = (*flags)->width;
	if (a == 0)
		a = 1;
	c = va_arg(*ap, int);
	copy = malloc(sizeof(char) * (1 + a - 1 * (c == 0)));
	if (!copy)
		return (NULL);
	a = -1;
	if (c == 0)
	{
		while (++a <= (*flags)->width - 2)
			copy[a] = ' ';
		copy[a] = '\0';
		(*flags)->sym = 1;
		return (copy);
	}
	ft_fill_c(flags, &copy, c);
	return (copy);
}
