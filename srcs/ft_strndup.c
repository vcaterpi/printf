/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:08:38 by antondob          #+#    #+#             */
/*   Updated: 2020/02/20 18:15:40 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, int i)
{
	char	*dst;

	dst = (char*)malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (NULL);
    dst[i] = 0;
	while (--i >= 0)
		dst[i] = str[i];
	return (dst);
}
