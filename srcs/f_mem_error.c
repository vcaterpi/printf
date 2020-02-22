#include "../includes/ft_printf.h"


int		mem_error(t_params *params)
{
	params->mem_error = 1;
	return (0);
}

int		mem_error_fl(t_float *fl)
{
	fl->mem_error = 1;
	return (0);
}

t_big_int	*mem_error_bi(t_big_int *new)
{
	big_int_del(new);
	return (NULL);
}
