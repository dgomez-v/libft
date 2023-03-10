/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-v <dgomez-v@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:16:30 by dgomez-v          #+#    #+#             */
/*   Updated: 2022/09/22 10:28:47 by dgomez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z')
		|| ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
