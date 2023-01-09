/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-v <dgomez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:32:28 by dgomez-v          #+#    #+#             */
/*   Updated: 2022/10/04 13:00:08 by dgomez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	altc;
	char	*alts;
	int		x;

	x = 0;
	altc = c;
	alts = (char *)s;
	while (alts[x] != altc)
	{
		if (alts[x] == '\0')
			return (NULL);
		x++;
	}
	return ((char *)alts + x);
}
