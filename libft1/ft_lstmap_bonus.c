/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 02:09:50 by aanbadi           #+#    #+#             */
/*   Updated: 2024/11/16 02:09:55 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new = malloc(sizeof(t_list));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new->content = f(lst->content);
		new->next = NULL;
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
