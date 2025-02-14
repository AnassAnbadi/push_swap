/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 22:27:24 by aanbadi           #+#    #+#             */
/*   Updated: 2024/11/22 00:37:50 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (!s1 && n == 0)
		return (ft_strlen(s2));
	i = 0;
	while (s1[i] != '\0' && i < n)
		i++;
	j = 0;
	if (n <= i)
		return (n + ft_strlen(s2));
	while (s2[j] != '\0' && i < n - 1)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (i + ft_strlen(s2) - j);
}
