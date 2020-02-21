/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 17:19:53 by antondob          #+#    #+#             */
/*   Updated: 2020/02/09 23:24:26 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    ft_puthex_low(int nbr)
{
    int rem;

    if (nbr < 16)
    {
        rem = nbr % 16;
        ft_putchar(rem >= 10 ? 'a' + rem - 10 : rem + '0');
        return ;
    }
    ft_puthex_low(nbr / 16);
    rem = nbr % 16;
    ft_putchar(rem >= 10 ? 'a' + rem - 10 : rem + '0');
}