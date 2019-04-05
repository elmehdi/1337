/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygnabou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 16:40:57 by ygnabou           #+#    #+#             */
/*   Updated: 2019/02/16 17:34:27 by ygnabou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_show(int l, int c, int x, int y)
{
	if ((l == 1 && c == 1) || (l == y && c == x
				&& l != 1 && c != 1))
		ft_putchar('/');
	else if ((l == 1 && c == x) || (l == y && c == 1))
		ft_putchar('\\');
	else if ( (c == 1 || c == x))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int l;
	int c;

	if ((x >= 1) && (y >= 1))
	{
		l = 1;
		while (l <= y)
		{
			c = 1;
			while (c <= x)
			{
				ft_show(l, c, x, y);
				c++;
			}
			ft_putchar('\n');
			l++;
		}
	}
}
