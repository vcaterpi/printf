/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antondob <antondob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 23:45:38 by vcaterpi          #+#    #+#             */
/*   Updated: 2019/10/19 13:01:42 by antondob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	if (!(join = ft_strnew(len_s1 + ft_strlen(s2) + 1)))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[i - len_s1])
	{
		join[i] = s2[i - len_s1];
		i++;
	}
	join[i] = '\0';
	return (join);
}
