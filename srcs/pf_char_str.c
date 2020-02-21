/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_char_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 22:27:50 by antondob          #+#    #+#             */
/*   Updated: 2020/02/21 01:03:51 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	pf_char_to_str(t_params *params, int c)
{
	char *str;

	str = ft_strnew(2);
	if (c == 0)
		params->char_nul = 1;
	str[0] = c;
	str[1] = '\0';
	params->str = str;
}
