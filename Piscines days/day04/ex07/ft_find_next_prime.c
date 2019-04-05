/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 23:48:04 by elfetoua          #+#    #+#             */
/*   Updated: 2019/02/21 00:07:56 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb == 0 || nb == 1)
		return (0);
	i = 3;
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	else
		while (!ft_is_prime(nb))
			nb++;
	return (nb);
}
