/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <vcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 20:37:40 by antondob          #+#    #+#             */
/*   Updated: 2019/11/23 18:30:27 by vcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char const *s1, char const *s2)
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
	ft_strdel((char**)(&s1));
	ft_strdel((char**)(&s2));
	return (join);
}
