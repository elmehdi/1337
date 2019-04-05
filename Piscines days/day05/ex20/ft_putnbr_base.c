/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 15:47:49 by elfetoua          #+#    #+#             */
/*   Updated: 2019/02/27 19:22:37 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

short	ft_is_valid_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a'
		&& base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	long	n;

	n = nbr;
	i = 0;
	if (ft_is_valid_base(base))
	{
		while (base[i])
			i++;
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n >= i)
			ft_putnbr_base(n / i, base);
		ft_putchar(base[n % i]);
	}
}
