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
ssize_t	ft_format(char **str, va_list *ap, ssize_t a);
ssize_t	ft_next(va_list *ap, t_flags **flags, ssize_t a);

char	*ft_copy_c(va_list *ap, t_flags *flags);

int		ft_get_flag(char **str);
int		ft_get_width(char **str);
int		ft_get_precision(char **str);
int		ft_get_type(char **str);

#endif