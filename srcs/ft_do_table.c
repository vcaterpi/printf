/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaterpi <vcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 23:51:21 by antondob          #+#    #+#             */
/*   Updated: 2020/01/24 16:33:51 by vcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		**ft_do_table(int rows, int cols)
{
	int **table;

	if (!(table = (int**)malloc(sizeof(int*) * rows)))
		return (NULL);
	while (--rows >= 0)
	{
		if (!(table[rows] = (int*)malloc(sizeof(int*) * cols)))
		{
			ft_delete_table(&table, rows);
			return (NULL);
		}
	}
	return (table);
}
