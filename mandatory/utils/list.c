/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:12:25 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/21 23:29:22 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	list_size(t_list *list)
{
    size_t	size;

    if (!list)
        return (0);
    size = 0;
    while (list)
    {
        size++;
        list = list->next;
    }
    return (size);
}

t_list	*list_last(t_list *list)
{
    if (!list)
        return (NULL);
    while (list->next)
        list = list->next;
    return (list);
}

void	list_add_back(t_list **list, t_list *new_node)
{
    t_list	*last;

    if (!list || !new_node)
        return ;
    if (*list == NULL)
        *list = new_node;
    else
    {
        last = list_last(*list);
        last->next = new_node;
    }
}

void	list_create(t_list **list, int val)
{
    t_list	*node;
    t_list	*current;

    node = malloc(sizeof(t_list));
    if (!node)
        return ;
    node->index = 0;
    node->position = 0;
    node->value = val;
    node->next = NULL;
    current = *list;
    while (current)
    {
        if (current->value > val)
            current->index++;
        else
            node->index++;
        current = current->next;
    }
    list_add_back(list, node);
}

void	list_free(t_list **list)
{
    t_list	*ptr;
    t_list	*node;

    ptr = *list;
    if (!ptr)
        return ;
    while (ptr)
    {
        node = ptr->next;
        free(ptr);
        ptr = node;
    }
}
