#include "ft_printf.h"

int	ft_fill_t(t_flags *flags, char *tmp, int a)
{
	int	m;

	if (flags->flag == -3)
		return (flags->width);
	if (flags->precision > ((int)ft_strlen(tmp) + 1 * (a < 0)))
		m = flags->precision + 1 * (a < 0);
	else
		m = (int)ft_strlen(tmp) + 1 * (a < 0);
	return (m);
}

int	ft_fill_t_u(t_flags *flags, char *tmp, unsigned int a)
{
	int	m;

	if (flags->precision > (int)ft_strlen(tmp))
		m = flags->precision;
	else
		m = (int)ft_strlen(tmp);
	return (m);
	(void) a;
}

void	ft_putchar_a(char **str, int *a)
{
	write(1, &(**str), 1);
	(*str)++;
	*a = *a + 1;
}

char	*ft_strjoin_new(char const *s1, char **s2)
{
	char	*dest;

	dest = ft_strjoin(s1, (*s2));
	if ((*s2))
		free (*s2);
	return (dest);
}
