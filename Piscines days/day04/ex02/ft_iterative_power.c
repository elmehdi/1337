/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 20:38:41 by elfetoua          #+#    #+#             */
/*   Updated: 2019/02/20 21:08:35 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		result;

	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	else
	{
		result = 1;
		i = 0;
		while (i < power)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
	return (0);
}
