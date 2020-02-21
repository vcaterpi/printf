#include "../includes/ft_printf.h"

void	get_str(t_float *fl)
{
	t_big_int	*tmp;
	t_big_int	*tmp1;

	tmp = read_ull(fl->m);
	tmp1 = pow_mult(tmp, 5, 63);
	big_int_del(tmp);
	if (fl->e < 16383)
	{
		tmp = pow_mult(tmp1, 10, 16383 - fl->e);
		big_int_del(tmp1);
		tmp1 = tmp;
	}
	tmp = pow_mult(tmp1, 2, fl->e - 16383);
	fl->str = big_int_tostr(tmp);
	big_int_del(tmp1);
	big_int_del(tmp);
}

void	ft_round(char **intpart, char *fraction, int end)
{
	char	*new;

	while (fraction[end] == '9' && end >= 0 && (fraction[end] = '0'))
		end--;
	if (end >= 0)
		fraction[end] += 1;
	else if ((end = ft_strlen(*intpart) - 1) >= 0)
	{
		while ((*intpart)[end] == '9' && end >= 0)
		{
			(*intpart)[end] = '0';
			end--;
		}
		if (end >= 0)
			(*intpart)[end] += 1;
		else
		{
			new = ft_strnew(ft_strlen(*intpart) + 1);
			new[0] = '1';
			ft_strcpy(new + 1, *intpart);
			free(*intpart);
			*intpart = new;
		}
	}
}

void	get_fstr(t_params *params, t_float *fl)
{
	int		point;
	int		flen;

	flen = ft_strlen(fl->str);
	point = flen - 63 + ((fl->e < 16383) ? fl->e - 16383 : 0);
	if (flen - point < params->preci)
		fl->str = add_suffix(fl->str, params->preci -
		(flen - point), '0');
	if (point > 0)
	{
		fl->intpart = ft_strndup(fl->str, point);
		fl->fraction = ft_strndup(fl->str + point, params->preci);
		if (fl->str[point + params->preci] > '4')
			ft_round(&(fl->intpart), fl->fraction, params->preci - 1);
	}
	else
	{
		fl->intpart = ft_strdup("0");
		flen = point + params->preci;
		fl->fraction = flen > 0 ? ft_strndup(fl->str, flen) : ft_strdup("");
		fl->fraction = add_prefix(fl->fraction, flen > 0 ?
		-point : params->preci, '0');
		if (fl->str[flen > 0 ? flen : 0] > '4')
			ft_round(&(fl->intpart), fl->fraction, params->preci - 1);
	}
}

void	float_handler(t_params *params, t_float *fl)
{
	free(fl->str);
	if (params->preci || params->alt)
		fl->intpart = add_suffix(fl->intpart, 1, '.');
	fl->str = ft_strjoin(fl->intpart, fl->fraction);
	free(fl->intpart);
	free(fl->fraction);
}

void		conv_float(t_params *params)
{
	t_float		*fl;

	fl = get_fl(params);
	get_str(fl);
	if (params->preci_bool == 'n')
		params->preci = 6;
	else if (params->preci < 0)
		params->preci = 0;
	get_fstr(params, fl);
	float_handler(params, fl);
	params->str = fl->str;
	if (fl->sign)
		params->sign = -1;
	free(fl);
}
