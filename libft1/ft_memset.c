/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:13:31 by aanbadi           #+#    #+#             */
/*   Updated: 2024/11/19 18:35:22 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*test;

	i = 0;
	test = (unsigned char *)b;
	while (i < len)
		test[i++] = (unsigned char)c;
	b = (void *)test;
	return (b);
}
