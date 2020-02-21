/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 19:37:28 by antondob          #+#    #+#             */
/*   Updated: 2020/02/18 00:20:26 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char   *ft_reverse_str(char *str)
{
	char    *rev;
	int     len;
	int     i;

	i = -1;
	len = ft_strlen(str);
	rev = ft_strnew(len);
	while (++i < len)
		rev[i] = str[len - i - 1];
	rev[i] = '\0';
	return (rev);
}
