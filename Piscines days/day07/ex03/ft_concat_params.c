/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 18:49:13 by elfetoua          #+#    #+#             */
/*   Updated: 2019/03/06 19:19:36 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src, int last)
{
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(dest);
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (i != last - 1)
	{
		*(dest + i) = '\n';
		*(dest + i + 1) = '\0';
	}
	else
		*(dest + i) = '\0';
	return (dest);
}

int		ft_sizelen(int argc, char **argv)
{
	int		i;
	int		len;

	i = 1;
	len = 0;
	while (i < argc)
	{
		len += ft_strlen(argv[i]) + 1;
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		len;
	char	*t;

	i = 1;
	len = 0;
	t = NULL;
	if (argc >= 1)
	{
		len = ft_sizelen(argc, argv);
		t = (char*)malloc(len + 1 + i);
		t[0] = '\0';
		while (i <= argc)
		{
			if (argv[i])
				t = ft_strcat(t, argv[i], len);
			i++;
		}
	}
	return (t);
}
