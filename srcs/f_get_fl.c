#include "../includes/ft_printf.h"

t_float	*get_params(long double f)
{
	t_float		*fl;

	fl = (t_float *)malloc(sizeof(t_float));
	fl->m = *((unsigned long long *)&f);
	fl->e = *((unsigned short *)&f + 4) & 0x7fff;
	fl->sign = (char)((*((unsigned short *)&f + 4) & 0x8000) >> 15);
	return (fl);
}

t_float	*get_fl(t_params *params)
{
	double			f;
	long double		lf;

	if (params->length == 'L')
	{
		lf = va_arg(params->ap, long double);
		return (get_params(lf));
	}
	f = va_arg(params->ap, double);
	return (get_params((long double)f));
}
