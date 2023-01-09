/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-v <dgomez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:53:56 by dgomez-v          #+#    #+#             */
/*   Updated: 2022/10/04 12:44:03 by dgomez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*alt;
	size_t		x;

	alt = (char *) s;
	x = ft_strlen(s);
	if (c == '\0')
		return (alt + x);
	while (x != 0)
	{
		if (alt[x] == (char)c)
			return (alt + x);
		x--;
	}
	if (s[0] == (char)c)
		return (alt);
	return (NULL);
}
