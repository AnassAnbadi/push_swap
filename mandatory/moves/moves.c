#include "../push_swap.h"

void	list_swap(t_list *list)
{
    int	temp;

    if (!list || !list->next)
        return ;
    temp = list->value;
    list->value = list->next->value;
    list->next->value = temp;
}

void	list_push(t_list **to, t_list **from)
{
    t_list	*node;

    if (!from || !(*from))
        return ;
    node = (*from)->next;
    (*from)->next = *to;
    *to = *from;
    *from = node;
}

void	list_rotate(t_list **list)
{
    t_list	*node;
    t_list	*last;

    if (!list || !(*list) || !(*list)->next)
        return ;
    last = list_last(*list);
    node = (*list)->next;
    (*list)->next = NULL;
    last->next = *list;
    *list = node;
}

void	list_reverse_rotate(t_list **list)
{
    t_list	*last;
    t_list	*second_last;

    if (!list || !(*list) || !(*list)->next)
        return ;
    second_last = *list;
    while (second_last->next->next)
        second_last = second_last->next;
    last = second_last->next;
    second_last->next = NULL;
    last->next = *list;
    *list = last;
}
