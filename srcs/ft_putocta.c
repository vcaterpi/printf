/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putocta.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:03:07 by antondob          #+#    #+#             */
/*   Updated: 2020/02/07 16:23:17 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putocta(int nbr)
{
    if (nbr < 8)
    {
        ft_putchar(nbr % 8 + '0');
        return ;
    }
    ft_putocta(nbr / 8);
    ft_putchar(nbr % 8 + '0');
}