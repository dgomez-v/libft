/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-v <dgomez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:54:13 by dgomez-v          #+#    #+#             */
/*   Updated: 2022/09/29 13:07:38 by dgomez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	i = ft_strlen(s1);
	copy = malloc(i + 1);
	if (!copy)
	{
		return (0);
	}
	ft_memcpy(copy, s1, i);
	copy[i] = '\0';
	return (copy);
}
