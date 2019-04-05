/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 17:07:16 by elfetoua          #+#    #+#             */
/*   Updated: 2019/02/22 23:01:35 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		fact;

	fact = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb == 2)
		return (2);
	if (nb > 2 && nb < 13)
	{
		i = 1;
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
		return (fact);
	}
	return (0);
}
