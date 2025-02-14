/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:41:17 by aanbadi           #+#    #+#             */
/*   Updated: 2024/11/15 23:41:32 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (fd < 0)
		return ;
	if (s == NULL)
	{
		return ;
	}
	i = ft_strlen(s);
	write(fd, s, i);
	write(fd, "\n", 1);
}
