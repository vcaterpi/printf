#include "../includes/ft_printf.h"

char	*add_suffix(char *str, int count, char c)
{
	char	*zero_str;
	char	*res;

	if (count <= 0)
		return (str);
	zero_str = ft_strnew(count);
	ft_memset(zero_str, c, count);
	res = ft_strjoin(str, zero_str);
	free(str);
	free(zero_str);
	return (res);
}
