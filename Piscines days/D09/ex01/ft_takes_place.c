/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:39:00 by elfetoua          #+#    #+#             */
/*   Updated: 2019/02/21 18:38:19 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	if (hour == 12)
		printf("12.00 P.M. AND 01.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 00)
		printf("12.00 A.M. AND 01.00 A.M.\n");
	else if (hour == 10)
		printf("10.00 A.M. AND 11.00 A.M.\n");
	else if (hour > 12)
		printf("%.2d.00 P.M. AND %.2d.00 P.M.\n", hour - 12, hour - 11);
	else if (hour == 9)
		printf("09.00 A.M. AMD 10.00 A.M.\n");
	else if (hour > 00 && hour < 10)
		printf("0%d.00 A.M. AND 0%d.00 A.M.\n", hour, hour + 1);
}
