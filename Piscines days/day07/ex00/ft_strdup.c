/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 18:19:52 by elfetoua          #+#    #+#             */
/*   Updated: 2019/03/02 01:49:46 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*mehdi;
	int		i;

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
