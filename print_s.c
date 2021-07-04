#include "ft_printf.h"

int	ft_quantity_s(t_flags *flags, char *tmp)
{
	int	q;

	q = ft_strlen(tmp);
	if (q == 0)
		return (flags->width);
	if (flags->width > flags->precision && flags->width > q)
		return (flags->width);
	if (q > flags->precision && flags->precision != -2)
	{
		if (flags->width > flags->precision)
			return (flags->width);
		return (flags->precision);
	}
	else
		return (q);
}

void	ft_fill_s2(int a, t_flags *flags, char *tmp, char **copy)
{
	int	q;

	q = ft_quantity_s(flags, tmp);
	while (tmp[++a] && (a < flags->precision || flags->precision == -2))
		(*copy)[a] = tmp[a];
	while (a < (int)q)
	{
		(*copy)[a] = ' ';
		a++;
	}
	(*copy)[a] = '\0';
}

char	*ft_fill_s(t_flags *flags, char **copy, char *tmp, int q)
{
	int	a;
	int	i;

	a = -1;
	i = -1;
	if (flags->flag == -1)
		ft_fill_s2(a, flags, tmp, copy);
	else
	{
		if (flags->precision != -2 && flags->precision <= (int)ft_strlen(tmp))
			while (q - (++a) > flags->precision)
				(*copy)[a] = ' ';
		else
			while (q - (++a) > (int)ft_strlen(tmp))
				(*copy)[a] = ' ';
		while (tmp[++i] && (a < q))
		{
			(*copy)[a] = tmp[i];
			a++;
		}
		(*copy)[a] = '\0';
	}
	return (*copy);
}

char	*ft_copy_s(va_list *ap, t_flags *flags)
{
	char	*copy;
	char	*tmp;
	int		q;
	int		a;

	a = -1;
	tmp = ft_get_s(ap, flags);
	if (!tmp)
		return (NULL);
	q = ft_quantity_s(flags, tmp);
	copy = malloc(sizeof(char) * (1 + q));
	if (!copy)
		return (NULL);
	if (q == (int)ft_strlen(tmp) && (flags->precision == (int)ft_strlen(tmp)
			|| flags->precision == -2))
	{
		while (++a < q)
			copy[a] = tmp[a];
		copy[a] = '\0';
	}
	else
		copy = ft_fill_s(flags, &copy, tmp, q);
	free(tmp);
	return (copy);
}

char	*ft_get_s(va_list *ap, t_flags *flags)
{
	char	*s;

	s = va_arg(*ap, char *);
	if (s)
		return (ft_strdup(s));
	else
	{
			(void) flags;
			return (ft_strdup("(null)"));
	}
}
