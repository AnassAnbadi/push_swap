/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanbadi <aanbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 22:42:19 by aanbadi           #+#    #+#             */
/*   Updated: 2025/03/07 22:42:19 by aanbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int arg_count, char **arg_values)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	process_args(arg_count, arg_values, &stack_a);
	sort(&stack_a, &stack_b);
	list_free(&stack_a);
	list_free(&stack_b);
	return (0);
}
