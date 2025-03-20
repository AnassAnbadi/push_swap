/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:34:52 by aanbadi           #+#    #+#             */
/*   Updated: 2025/03/17 23:19:09 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sort_patterns_secondary(t_list *stack, int peak, int up, int direction)
{
    int	len;

    len = list_size(stack);
    while (stack && (stack)->next)
    {
        if ((stack)->index < (stack)->next->index)
        {
            if (direction == DOWN)
                return (RA);
            up++;
            direction = UP;
        }
        else
        {
            if (direction == UP)
                peak = 1;
            direction = DOWN;
        }
        (stack) = (stack)->next;
    }
    if (peak && (up > len / 4))
        return (RRA);
    return (RA);
}

int	check_sort_patterns(t_list *stack)
{
    int		peak;
    int		down;
    int		up;
    int		direction;
    t_list	*tmp;

    peak = 0;
    down = 0;
    up = 0;
    direction = 0;
    tmp = stack;
    while (tmp && tmp->next)
    {
        if (tmp->index > tmp->next->index)
            down++;
        tmp = tmp->next;
    }
    if (down > (list_size(stack) - 1) * 0.7)
        return (RRA);
    return (check_sort_patterns_secondary(stack, peak, up, direction));
}