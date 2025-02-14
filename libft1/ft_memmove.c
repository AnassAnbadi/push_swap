/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:26:57 by aanbadi           #+#    #+#             */
/*   Updated: 2024/11/16 00:01:17 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_memcpy_forward(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

static void	ft_memcpy_reverse(char *dst, const char *src, size_t len)
{
	while (len > 0)
	{
		len--;
		dst[len] = src[len];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_src;
	char	*c_dst;

	if (dst == src)
		return (dst);
	c_src = (char *)src;
	c_dst = (char *)dst;
	if (c_dst > c_src)
		ft_memcpy_reverse(c_dst, c_src, len);
	else
		ft_memcpy_forward(c_dst, c_src, len);
	return (dst);
}
