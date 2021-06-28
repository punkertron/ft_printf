#include "ft_printf.h"

char	*ft_copy_c(va_list *ap, t_flags *flags)
{
	char	*copy;
	int		a;

	a = 0;
	copy = malloc(sizeof(char) * (2 + flags->width));
	if (!copy)
		return (NULL);
	if (flags->flag == -1)
	{
		copy[a] = va_arg(*ap, unsigned int);
		while (++a <= flags->width)
			copy[a] = ' ';
		copy[a] = '\0';
	}
	else
	{
		while (a < flags->width)
		{
			copy[a] = ' ';
			a++;
		}
		copy[a] = va_arg(*ap, unsigned int);
		copy[++a] = '\0';
	}
	return (copy);
}
