#include "ft_printf.h"

static char	*ft_fill_zero_per(t_flags *flags)
{
	char	*copy;
	int		a;

	a = 0;
	copy = malloc(sizeof(char) * (flags->width + 1));
	if (!copy)
		return (NULL);
	while (a < flags->width - 1)
	{
		copy[a] = '0';
		a++;
	}
	copy[a] = '%';
	copy[++a] = '\0';
	return (copy);
}

char	*ft_copy_percent(t_flags *flags)
{
	int		q;
	char	*copy;

	q = -1;
	if (flags->flag == -3)
		return (ft_fill_zero_per(flags));
	copy = malloc(sizeof(char) * (flags->width + 1));
	if (!copy)
		return (NULL);
	if (flags->flag != -1)
	{
		while (++q < flags->width - 1)
			copy[q] = ' ';
		copy[q++] = '%';
	}
	else
	{
		copy[++q] = '%';
		while (++q < flags->width)
			copy[q] = ' ';
	}
	copy[q] = '\0';
	return (copy);
}
