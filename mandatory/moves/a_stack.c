#include "../push_swap.h"

void	sa(t_list *stack_a)
{
    list_swap(stack_a);
    ft_write("sa\n");
}

void	pa(t_list **stack_a, t_list **stack_b)
{
    list_push(stack_a, stack_b);
    ft_write("pa\n");
}

void	ra(t_list **stack_a)
{
    list_rotate(stack_a);
    ft_write("ra\n");
}

void	rra(t_list **stack_a)
{
    list_reverse_rotate(stack_a);
    ft_write("rra\n");
}
