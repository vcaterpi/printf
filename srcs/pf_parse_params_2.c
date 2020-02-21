/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_parse_params_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 00:42:14 by antondob          #+#    #+#             */
/*   Updated: 2020/02/21 02:23:03 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		parse_flags(t_params *params)
{
	int f;
	
	f = 0;
	if (*(params->format) == '-')
		(params->align = 'l') && (f = 1);
	else if (*(params->format) == '+')
		(params->sign = 1) && (f = 1);
	else if (*(params->format) == ' ')
		(params->space = 1) && (f = 1);
	else if (*(params->format) == '#')
		(params->alt = 1) && (f = 1);
	else if (*(params->format) == '0')
		(params->nul = 1) && (f = 1);
	if (f == 1)
		params->format++;
	return (f ? 1 : 0);
}
