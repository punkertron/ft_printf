#include "ft_printf.h"

char	*ft_convert(unsigned int a, char *s)
{
	unsigned int	i;
	unsigned int	q;
	char			*save;

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

char	*ft_copy_x(va_list *ap, t_flags *flags)
{
	char			*copy;
	char			*tmp;
	unsigned int	a;

	a = va_arg(*ap, unsigned int);
	if (flags->precision == 0 && flags->width == 0)
		return (ft_strdup(""));
	if (flags->type == 6)
		tmp = ft_convert(a, "0123456789abcdef");
	else
		tmp = ft_convert(a, "0123456789ABCDEF");
	if (!tmp)
		return (NULL);
	copy = malloc(sizeof(char) * (ft_quantity_di_u(flags, tmp, a) + 1));
	if (!copy)
		return (NULL);
	ft_fill_di_u(&copy, tmp, flags, a);
	free(tmp);
	return (copy);
}
