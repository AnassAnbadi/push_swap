#include "../push_swap.h"

void	ss(t_list *stack_a, t_list *stack_b)
{
    list_swap(stack_a);
    list_swap(stack_b);
    ft_write("ss\n");
}

void	rr(t_list **stack_a, t_list **stack_b)
{
    list_rotate(stack_a);
    list_rotate(stack_b);
    ft_write("rr\n");
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
    list_reverse_rotate(stack_a);
    list_reverse_rotate(stack_b);
    ft_write("rrr\n");
}
