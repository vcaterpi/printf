/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 00:18:37 by vcaterpi          #+#    #+#             */
/*   Updated: 2019/10/19 13:07:48 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	size_t			i;
	unsigned int	start;
	unsigned int	end;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (!str[i])
		return (ft_strnew(0));
	start = i;
	while (str[i])
		i++;
	i--;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i--;
	end = i + 1;
	return (ft_strsub(str, start, end - start));
}
