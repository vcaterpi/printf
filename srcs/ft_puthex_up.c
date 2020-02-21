/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:29:12 by antondob          #+#    #+#             */
/*   Updated: 2020/02/07 16:42:04 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_puthex_up(int nbr)
{
    int rem;

    if (nbr < 16)
    {
        ft_putchar(nbr % 16 + '0');
        return ;
    }
    ft_puthex_up(nbr / 16);
    rem = nbr % 16;
    ft_putchar(rem >= 10 ? 'A' + rem - 10 : rem + '0');
}