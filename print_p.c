#include "ft_printf.h"

char	*ft_copy_p(va_list *ap, t_flags *flags)
{
	char			*copy;
	char			*tmp;
	unsigned int	a;

	a = va_arg(*ap, unsigned int);
	if (a == 0 && flags->precision == 0)
		tmp = ft_strdup("0x");
	else
		tmp = ft_strjoin("0x", ft_convert(a, "0123456789abcdef"));
	if (!tmp)
		return (NULL);
	copy = malloc(sizeof(char) * (ft_quantity_di_u(flags, tmp, a) + 1));
	if (!copy)
		return (NULL);
	ft_fill_di_u(&copy, tmp, flags, a);
	free(tmp);
	return (copy);
}
