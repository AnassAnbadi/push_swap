#include "../push_swap.h"

int	find_min(t_list *lst)
{
    int	min;

    min = lst->value;
    while (lst)
    {
        if (lst->value < min)
            min = lst->value;
        lst = lst->next;
    }
    return (min);
}

int	find_max(t_list *lst)
{
    int	max;

    max = lst->value;
    while (lst)
    {
        if (lst->value > max)
            max = lst->value;
        lst = lst->next;
    }
    return (max);
}

int	find_max_position(t_list *lst) // Corrected function name
{
    int	max;

    max = find_max(lst);
    while (lst)
    {
        if (lst->value == max)
            return (lst->position);
        lst = lst->next;
    }
    return (0);
}
