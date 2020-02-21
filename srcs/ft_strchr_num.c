/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <vcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:03:02 by antondob          #+#    #+#             */
/*   Updated: 2019/11/23 16:55:17 by vcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strchr_num(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	if (c != 0 && !str[i])
		return (-1);
	return (i);
}
