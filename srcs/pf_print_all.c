/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 23:46:44 by antondob          #+#    #+#             */
/*   Updated: 2020/02/21 03:06:25 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_char(t_params *params, char c)
{
	ft_putchar(c);
	params->ret++;
}

void	print_string(t_params *params)
{
	if (params->char_nul == 1)
	{
		ft_putchar(0);
		params->ret++;
	}
	ft_putstr(params->str);
	params->ret += ft_strlen(params->str);
}
