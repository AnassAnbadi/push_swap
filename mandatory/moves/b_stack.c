#include "../push_swap.h"

void	sb(t_list *stack_b)
{
    list_swap(stack_b);
    ft_write("sb\n");
}

void	pb(t_list **stack_a, t_list **stack_b)
{
    list_push(stack_b, stack_a);
    ft_write("pb\n");
}

void	rb(t_list **stack_b)
{
    list_rotate(stack_b);
    ft_write("rb\n");
}

void	rrb(t_list **stack_b)
{
    list_reverse_rotate(stack_b);
    ft_write("rrb\n");
}
