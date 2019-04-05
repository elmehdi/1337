/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 22:44:39 by elfetoua          #+#    #+#             */
/*   Updated: 2019/03/06 04:08:08 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(t_stock_par *par);
char				**ft_split_whitespaces(char *str);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nbr);

#endif
