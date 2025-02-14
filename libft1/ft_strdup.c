/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:40:15 by aanbadi           #+#    #+#             */
/*   Updated: 2024/11/22 00:22:18 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len_s;
	size_t	i;
	char	*p;

	i = 0;
	len_s = ft_strlen(s1);
	p = (char *)malloc(sizeof(char) * (len_s + 1));
	if (!p)
		return (NULL);
	while (i < len_s)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
