/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 00:25:46 by elfetoua          #+#    #+#             */
/*   Updated: 2019/03/05 22:41:42 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_pointers_number(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			if ((str[i + 1] != ' ' || str[i + 1] != '\n' || str[i + 1] != '\t'))
				j++;
		}
		i++;
	}
	return (j);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	**ft_fill(char *str, char **s, int len)
{
	int i;
	int k;
	int j;

	i = 0;
	k = 0;
	while (i < len)
	{
		j = 0;
		while (str[i] != ' ' && str[i] != '\n'
				&& str[i] != '\t' && str[i] != '\0')
			s[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (j > 0)
		{
			s[k][j] = '\0';
			k++;
		}
	}
	s[k] = 0;
	return (s);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		len;
	char	**s;

	len = ft_strlen(str);
	j = ft_pointers_number(str);
	s = malloc((j + 1) * sizeof(char**));
	i = 0;
	while (i < j)
		s[i++] = malloc(len * sizeof(char*));
	s = ft_fill(str, s, len);
	return (s);
}
