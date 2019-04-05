/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 01:51:29 by elfetoua          #+#    #+#             */
/*   Updated: 2019/03/02 16:37:38 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*table;
	int		i;
	int		a;

	if (min >= max)
		return (NULL);
	table = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	a = min;
	while (i < (max - min))
	{
		table[i] = a;
		i++;
		a++;
	}
	return (table);
}
