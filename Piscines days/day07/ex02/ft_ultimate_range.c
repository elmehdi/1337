/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 16:04:26 by elfetoua          #+#    #+#             */
/*   Updated: 2019/03/06 19:23:27 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*array;
	int		i;
	int		a;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	array = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	a = min;
	while (i < (max - min))
	{
		array[i] = a;
		i++;
		a++;
	}
	*range = array;
	return (max - min);
}
