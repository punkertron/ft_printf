#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# include <stdio.h>

typedef struct s_flags
{
	int	flag;
	int	width;
	int	precision;
	int	type;
}	t_flags;

int		ft_printf(const char *format, ...);
int		ft_printf_next(char **str, char **tmp, va_list *ap);
int		ft_format(char **str, va_list *ap);
int		ft_next(va_list *ap, t_flags **flags);

int		ft_get_flag(char **str);
int		ft_get_width(va_list *ap, char **str);
int		ft_get_precision(va_list *ap, char **str);
int		ft_get_type(char **str);
void	ft_check_flags(t_flags **flags);

int		ft_copy_c(va_list *ap, t_flags *flags);
void	ft_fill_c(t_flags **flags, char **copy, char c);

char	*ft_copy_s(va_list *ap, t_flags *flags);
int		ft_quantity_s(t_flags *flags, char *tmp);
void	ft_fill_s2(int a, t_flags *flags, char *tmp, char **copy);
char	*ft_get_s(va_list *ap, t_flags *flags);

char	*ft_copy_di(va_list *ap, t_flags *flags);
int		ft_quantity_di(t_flags *flags, char *tmp, int a);
void	ft_fill_di(char **copy, char *tmp, t_flags *flags, int a);
void	ft_fill_di2(char **copy, char *tmp, t_flags *flags, int a);
void	ft_fill_di3(char **copy, char *tmp, t_flags *flags, int a);
char	*ft_fill_di_zero(char **copy, char **tmp, t_flags *flags, int a);
void	ft_fill_di_end(char **copy, char *tmp, t_flags *flags, int a);
char	*ft_fill_pres_zero(char **copy, char**tmp, t_flags *flags);

char	*ft_copy_u(va_list *ap, t_flags *flags);
void	ft_fill_di_u(char **copy, char *tmp, t_flags *flags, unsigned int a);
void	ft_fill_di3_u(char **copy, char *tmp, t_flags *flags, unsigned int a);
void	ft_fill_di2_u(char **copy, char *tmp, t_flags *flags, unsigned int a);
int		ft_quantity_di_u(t_flags *flags, char *tmp, unsigned int a);

char	*ft_copy_x(va_list *ap, t_flags *flags);
char	*ft_convert(unsigned int a, char *s);

char	*ft_copy_p(va_list *ap, t_flags *flags);
char	*ft_convert_p(size_t a, char *s);
void	ft_fill_di2_u_p(char **copy, char *tmp, t_flags *flags, size_t a);
void	ft_fill_di3_u_p(char **copy, char *tmp, t_flags *flags, size_t a);
void	ft_fill_di_u_p(char **copy, char *tmp, t_flags *flags, size_t a);

char	*ft_itoa_new(int n);
char	*ft_itoa_new_u(unsigned int n);
int		ft_fill_t(t_flags *flags, char *tmp, int a);
int		ft_fill_t_u(t_flags *flags, char *tmp, unsigned int a);
void	ft_putchar_a(char **str, int *a);
char	*ft_strjoin_new(char const *s1, char **s2);

#endif