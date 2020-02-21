/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 23:46:44 by antondob          #+#    #+#             */
/*   Updated: 2020/02/22 01:21:41 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_errors(t_params *params)
{
	if (params->mem_error == 1)
	{
		ft_putstr("\n**memory allocation error**\n");
		return ;
	}
	if (params->error == 1)
		ft_putstr("\n**invalid format string -> man 2 printf**\n");
}

void	print_char(t_params *params, char c)
{
	ft_putchar(c);
	params->ret++;
}

void	print_string(t_params *params)
{
	if (params->char_nul == 1 && params->align == 'l')
	{
		ft_putchar(0);
		params->ret++;
	}
	ft_putstr(params->str);
	if (params->char_nul == 1 && params->align == 'r')
	{
		ft_putchar(0);
		params->ret++;
	}
	params->ret += ft_strlen(params->str);
}
