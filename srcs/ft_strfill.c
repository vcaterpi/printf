/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:10:07 by vcaterpi          #+#    #+#             */
/*   Updated: 2020/02/22 00:59:30 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strfill(char *str, char c, int repeat)
{
	if (!str)
		return ;
	while (repeat--)
		str[repeat] = c;
}
