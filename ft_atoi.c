/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-v <dgomez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:23:44 by dgomez-v          #+#    #+#             */
/*   Updated: 2022/10/04 12:13:35 by dgomez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	x;

	x = 0;
	res = 0;
	sign = 1;
	while (str[x] == ' ' || str[x] == '\t' || str[x] == '\n'
		|| str [x] == '\v' || str[x] == '\r' || str[x] == '\f')
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign = -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		res = (res * 10) + (str[x] - '0');
		x++;
	}
	return ((int)(res * sign));
}
