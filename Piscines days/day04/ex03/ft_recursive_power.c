/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 21:09:35 by elfetoua          #+#    #+#             */
/*   Updated: 2019/02/21 00:08:37 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 1 || power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
