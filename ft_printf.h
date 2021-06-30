#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_flags
{
	int	flag;
	int	width;
	int	precision;
	int	type;
}	t_flags;

int		ft_printf(const char *format, ...);
ssize_t	ft_format(char **str, va_list *ap, ssize_t a);
ssize_t	ft_next(va_list *ap, t_flags **flags, ssize_t a);

int		ft_get_flag(char **str);
int		ft_get_width(va_list *ap, char **str);
int		ft_get_precision(va_list *ap, char **str);
int		ft_get_type(char **str);

char	*ft_copy_c(va_list *ap, t_flags *flags);
char	*ft_copy_s(va_list *ap, t_flags *flags);
int		ft_quantity_s(t_flags *flags, char *tmp);
void	ft_fill_s2(int a, t_flags *flags, char *tmp, char **copy);

char	*ft_copy_di(va_list *ap, t_flags *flags);
int		ft_quantity_di(t_flags *flags, char *tmp, int a);
void	ft_fill_di(char **copy, char *tmp, t_flags *flags, int a);
void	ft_fill_di2(char **copy, char *tmp, t_flags *flags, int a);
void	ft_fill_di3(char **copy, char *tmp, t_flags *flags, int a);

char	*ft_itoa_new(int n);
int		ft_fill_t(t_flags *flags, char *tmp, int a);

#endif