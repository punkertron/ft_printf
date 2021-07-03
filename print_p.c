#include "ft_printf.h"

char	*ft_copy_p(va_list *ap, t_flags *flags)
{
	char	*copy;
	char	*tmp;
	char	*conv;
	size_t	a;

	a = va_arg(*ap, size_t);
	if (a == 0 && flags->precision == 0)
		tmp = ft_strdup("0x");
	else
	{
		conv = ft_convert_p(a, "0123456789abcdef");
		tmp = ft_strjoin_new("0x", &conv);
	}
	if (!tmp)
		return (NULL);
	copy = malloc(sizeof(char) * (ft_quantity_di_u(flags, tmp, a) + 1));
	if (!copy)
		return (NULL);
	ft_fill_di_u_p(&copy, tmp, flags, a);
	free(tmp);
	return (copy);
}

char	*ft_convert_p(size_t a, char *s)
{
	size_t	i;
	size_t	q;
	char	*save;

	i = a;
	q = 1;
	i = i / 16;
	while (i)
	{
		i = i / 16;
		q++;
	}
	save = malloc(sizeof(char) * (q + 1));
	if (!save)
		return (NULL);
	save[q] = '\0';
	save[--q] = s[a % 16];
	a = a / 16;
	while (a)
	{
		save[--q] = s[a % 16];
		a = a / 16;
	}
	return (save);
}

void	ft_fill_di2_u_p(char **copy, char *tmp, t_flags *flags, size_t a)
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

void	ft_fill_di3_u_p(char **copy, char *tmp, t_flags *flags, size_t a)
{
	int	m;

	ft_fill_di2_u_p(copy, tmp, flags, a);
	m = ft_strlen(*copy);
	while (m < flags->width)
		(*copy)[m++] = ' ';
	(*copy)[m] = '\0';
}

void	ft_fill_di_u_p(char **copy, char *tmp, t_flags *flags, size_t a)
{
	int		i;
	char	*save;

	i = -1;
	if (flags->width > (int)ft_strlen(tmp)
		&& flags->width > flags->precision)
	{
		if (flags->flag == -1)
			ft_fill_di3_u_p(copy, tmp, flags, a);
		else
		{
			while (flags->width - ft_fill_t_u(flags, tmp, a) > ++i)
				(*copy)[i] = ' ';
			save = (*copy);
			(*copy) = (*copy) + i;
			ft_fill_di2_u_p(copy, tmp, flags, a);
			(*copy) = save;
		}
	}
	else
		ft_fill_di2_u_p(copy, tmp, flags, a);
}
