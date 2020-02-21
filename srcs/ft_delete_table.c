/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <vcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 23:51:10 by antondob          #+#    #+#             */
/*   Updated: 2020/01/24 16:34:48 by vcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_delete_table(int ***table, int rows)
{
	if (!table || !(*table))
		return ;
	while (--rows >= 0)
		free((*table)[rows]);
	free(*table);
	*table = NULL;
}
