/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-v <dgomez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:16:19 by dgomez-v          #+#    #+#             */
/*   Updated: 2022/09/28 11:18:06 by dgomez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*y;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return ((char *) ft_calloc(1, sizeof(char)));
	if (ft_strlen(s) <= start + len)
		y = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		y = malloc(sizeof(char) * (len + 1));
	if (!y)
		return (NULL);
	while (s[start] && i < len)
		y[i++] = s[start++];
	y[i] = '\0';
	return (y);
}
