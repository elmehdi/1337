/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 03:13:29 by elfetoua          #+#    #+#             */
/*   Updated: 2019/02/20 03:41:43 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		k;
	int		tmp;

	i = 0;
	while (i <= size - 1)
	{
		k = 0;
		while (k <= size - 2)
		{
			if (tab[k] >= tab[k + 1])
			{
				tmp = tab[k];
				tab[k] = tab[k + 1];
				tab[k + 1] = tmp;
			}
			k++;
		}
		i++;
	}
}
