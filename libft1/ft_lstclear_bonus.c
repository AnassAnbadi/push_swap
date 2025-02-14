/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:42:25 by aanbadi           #+#    #+#             */
/*   Updated: 2024/11/19 16:42:33 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*next;

	if (!lst || !del)
		return ;
	p = *lst;
	while (p)
	{
		next = p->next;
		ft_lstdelone(p, del);
		p = next;
	}
	*lst = NULL;
}
