/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <vcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 18:06:53 by antondob          #+#    #+#             */
/*   Updated: 2020/02/07 18:36:30 by vcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putadress(long int p)
{
	long int rem;

	if (p < 16)
	{
		ft_putchar(p % 16 + '0');
		return ;
	}
	ft_putadress(p / 16);
	rem = p % 16;
	ft_putchar(rem >= 10 ? 'a' + rem - 10 : rem + '0');
}

static void		ft_putprefix()
{
	ft_putchar('0');
	ft_putchar('x');
}

void			ft_putpointer(long int p)
{
	ft_putprefix();
	ft_putadress(p);
}
