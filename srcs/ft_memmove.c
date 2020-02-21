/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:18:39 by vcaterpi          #+#    #+#             */
/*   Updated: 2019/10/25 22:35:32 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst - src < (int)n)
		while ((int)(--n) >= 0)
			((unsigned char*)dst)[n] = ((unsigned char*)src)[n];
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
