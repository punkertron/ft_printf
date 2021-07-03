#include "ft_printf.h"

char	*ft_copy_c(va_list *ap, t_flags *flags)
{
	char	*copy;
	char	c;
	int		a;

	a = flags->width;
	if (a == 0)
		a = 1;
	c = va_arg(*ap, unsigned int);
	if (c == 0)
		c = ' ';
	copy = malloc(sizeof(char) * (1 + a));
	if (!copy)
		return (NULL);
	a = -1;
	if (flags->flag == -1)
	{
		copy[++a] = c;
		while (++a <= flags->width - 1)
			copy[a] = ' ';
		copy[a] = '\0';
	}
	else
	{
		while (++a < flags->width - 1)
			copy[a] = ' ';
		copy[a] = c;
		copy[++a] = '\0';
	}
	return (copy);
}
