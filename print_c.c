#include "ft_printf.h"

char	*ft_copy_c(va_list *ap, t_flags *flags)
{
	char	*copy;
	int		a;

	a = flags->width;
	if (a == 0)
		a = 1;
	copy = malloc(sizeof(char) * (1 + a));
	if (!copy)
		return (NULL);
	a = -1;
	if (flags->flag == -1)
	{
		copy[++a] = va_arg(*ap, unsigned int);
		while (++a <= flags->width - 1)
			copy[a] = ' ';
		copy[a] = '\0';
	}
	else
	{
		while (++a < flags->width - 1)
			copy[a] = ' ';
		copy[a] = va_arg(*ap, unsigned int);
		copy[++a] = '\0';
	}
	return (copy);
}
