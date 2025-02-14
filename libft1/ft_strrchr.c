/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:42:36 by aanbadi           #+#    #+#             */
/*   Updated: 2024/11/21 23:11:11 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	char	*p;
	size_t	i;

	i = ft_strlen(s) + 1;
	a = (char)c;
	while (i > 0)
	{
		if (s[i - 1] == a)
		{
			p = (char *)s + i - 1;
			return (p);
		}
		i--;
	}
	return (NULL);
}
