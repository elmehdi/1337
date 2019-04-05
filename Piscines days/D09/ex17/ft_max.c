/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 13:11:09 by elfetoua          #+#    #+#             */
/*   Updated: 2019/02/22 13:17:05 by elfetoua         ###   ########.fr       */
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

int		ft_max(int *tab, int length)
{
	ft_sort_integer_table(tab, length);
	return (tab[length - 1]);
}
