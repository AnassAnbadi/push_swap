/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:43:40 by aanbadi           #+#    #+#             */
/*   Updated: 2024/11/19 18:30:55 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	char	*p;
	size_t	i;

	i = 0;
	a = (char)c;
	while (i <= ft_strlen(s))
	{
		if (s[i] == a)
		{
			p = (char *)(s + i);
			return (p);
		}
		i++;
	}
	return (NULL);
}
