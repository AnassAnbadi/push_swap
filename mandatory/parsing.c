
#include "push_swap.h"

void	display_error(void)
{
    write(2, "Error\n", 6);
    exit (1);
}

int	has_duplicate(t_list *list, int val)
{
    while (list)
    {
        if (list->value == val)
            return (1);
        list = list->next;
    }
    return (0);
}

int	validate_line(char *line, t_list **stack_a)
{
    int		index;
    char	**split_arr;

    index = 0;
    split_arr = ft_split(line, ' ');
    while (split_arr[index])
    {
        if (!ft_isint(split_arr[index]) || has_duplicate(*stack_a, ft_atol(split_arr[index])))
            return (0);
        list_create(stack_a, ft_atol(split_arr[index]));
        index++;
    }
    ft_free(split_arr, index);
    return (1);
}

void	process_args(int arg_count, char **arg_values, t_list **stack_a)
{
    int	index;

    if (arg_count == 1)
        exit(0);
    if (arg_count >= 2)
    {
        index = 1;
        while (index < arg_count)
        {
            if (!validate_line(arg_values[index], stack_a) || ft_strlen(arg_values[index]) == 0)
                display_error();
            index++;
        }
    }
}
