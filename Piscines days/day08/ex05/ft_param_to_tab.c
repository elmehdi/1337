/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 10:44:23 by elfetoua          #+#    #+#             */
/*   Updated: 2019/03/07 03:04:00 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char					*ft_strdup(char *src)
{
	char		*mehdi;
	int			i;

	i = 0;
	mehdi = NULL;
	while (src[i] != '\0')
		i++;
	mehdi = (char*)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i] != '\0')
	{
		mehdi[i] = src[i];
		i++;
	}
	mehdi[i] = '\0';
	return (mehdi);
}

struct	s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*arr;
	int			i;
	int			j;

	arr = malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		arr[i].size_param = j;
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		arr[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	arr[i].str = NULL;
	return (arr);
}
