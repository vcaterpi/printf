/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:44:10 by vcaterpi          #+#    #+#             */
/*   Updated: 2020/02/21 01:39:11 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_params	params;

	va_start(params.ap, format);
	init_params(&params, (char*)format);
	while (*(params.format))
	{
		if (*(params.format) != '%')
			print_char(&params, *(params.format));
		else 
		{
			parse_params(&params);
			if (params.error == 1)
				break ;
			process_arguments(&params);
			apply_flags(&params);
			print_string(&params);
			clean_params(&params);
		}
		if (!*(params.format))
			break ;
		(params.format)++;
	}
	clean_params(&params);
	va_end(params.ap);
	return (params.ret);
}
