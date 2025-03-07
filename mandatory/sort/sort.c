
#include "../push_swap.h"

int	is_sorted(t_list *list)
{
    while (list && list->next)
    {
        if (list->value > list->next->value)
            return (0);
        list = list->next;
    }
    return (1);
}

void	set_position(t_list *list)
{
    int		position;

    position = 0;
    while (list)
    {
        list->position = position++;
        list = list->next;
    }
}

void	move_a(t_list **stack_a, t_list **stack_b)
{
    int	stack_b_size;
    int	max_position;

    stack_b_size = list_size(*stack_b);
    while (stack_b_size)
    {
        set_position(*stack_b);
        max_position = find_max_position(*stack_b);
        while ((*stack_b)->position != max_position)
        {
            if (max_position < stack_b_size / 2)
                rb(stack_b);
            else
                rrb(stack_b);
        }
        pa(stack_a, stack_b);
        stack_b_size--;
    }
}

void	move_b(t_list **stack_a, t_list **stack_b, int stack_a_size)
{
    int	i;
    int	x;

    if (stack_a_size <= 100)
        x = 16;
    else
        x = 36;
    i = 0;
    while (*stack_a)
    {
        if ((*stack_a)->index <= i)
        {
            pb(stack_a, stack_b);
            i++;
        }
        else if ((*stack_a)->index <= i + x)
        {
            pb(stack_a, stack_b);
            rb(stack_b);
            i++;
        }
        else
            ra(stack_a);
    }
}

void	sort(t_list **stack_a, t_list **stack_b)
{
    int		stack_a_size;

    if (!is_sorted(*stack_a))
    {
        stack_a_size = list_size(*stack_a);
        if (stack_a_size == 2)
            sa(*stack_a);
        else if (stack_a_size == 3)
            sort_3(stack_a);
        else if (stack_a_size == 4)
            sort_4(stack_a, stack_b);
        else if (stack_a_size == 5)
            sort_5(stack_a, stack_b);
        else
        {
            move_b(stack_a, stack_b, stack_a_size);
            move_a(stack_a, stack_b);
        }
    }
}
