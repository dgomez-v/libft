/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-v <dgomez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:09:01 by dgomez-v          #+#    #+#             */
/*   Updated: 2022/09/27 12:12:19 by dgomez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
	{
		return (NULL);
	}
	if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len --)
		{
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
		}
	}
	return (dst);
}
