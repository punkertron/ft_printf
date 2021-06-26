#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_flags
{
	int flag;
	int	width;
	int	precision;
	int	type;
}	t_flags;

int		ft_printf(const char *format, ...);
ssize_t	ft_format(char **str, va_list *ap);

int		ft_get_flag(char **str);
int		ft_get_width(char **str);
int		ft_get_precision(char **str);
int		ft_get_type(char **str);

#endif