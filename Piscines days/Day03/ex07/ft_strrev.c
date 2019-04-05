/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 20:18:21 by elfetoua          #+#    #+#             */
/*   Updated: 2019/02/19 21:34:08 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	char	temp;
	int		n;
	int		i;

	n = ft_strlen(str);
	n--;
	i = 0;
	while (n > i)
	{
		temp = str[i];
		str[i] = str[n];
		str[n] = temp;
		i++;
		n--;
	}
	return (str);
}
