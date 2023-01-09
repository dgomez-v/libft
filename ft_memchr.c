/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-v <dgomez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:27:33 by dgomez-v          #+#    #+#             */
/*   Updated: 2022/09/27 11:30:29 by dgomez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			return ((unsigned char *)s);
		}
		s++;
	}
	return (NULL);
}
