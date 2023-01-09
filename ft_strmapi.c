/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-v <dgomez-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:07:50 by dgomez-v          #+#    #+#             */
/*   Updated: 2022/09/28 12:13:21 by dgomez-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*y;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	y = malloc(sizeof(char) * (len + 1));
	if (!s || !f)
	{
		return (NULL);
	}
	if (!y)
	{
		return (NULL);
	}
	while (s[i])
	{
		y[i] = f(i, s[i]);
		i++;
	}
	y[i] = '\0';
	return (y);
}
