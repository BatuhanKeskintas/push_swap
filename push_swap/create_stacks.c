/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:16:33 by bkeskint          #+#    #+#             */
/*   Updated: 2021/10/27 17:55:15 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_push_swap(t_stack *stack)
{
	if (stack->size == 3)
		sort_three(stack);
	else if (stack->size == 4 || stack->size == 5)
		sort_four_five(stack);
	else
	{
		stack_sort(stack);
		find_index(stack);
		max_bit(stack);
		radix_sort(stack);
	}
}

void	create_stacks(int argc, char *argv[], t_stack *stack)
{
	int	i;

	i = 0;
	stack->size = argc - 1;
	stack->size_a = argc - 1;
	stack->size_b = 0;
	stack->stack_a = malloc(sizeof(int) * (argc - 1));
	stack->stack_b = malloc(sizeof(int) * (argc - 1));
	stack->sorted_stack = malloc(sizeof(int) * (argc - 1));
	while (i < argc - 1)
	{
		stack->stack_a[i] = ft_atolong(argv[i + 1]);
		stack->sorted_stack[i] = ft_atolong(argv[i + 1]);
		i++;
	}
	if (is_a_sorted(stack))
		return ;
	else
		do_push_swap(stack);
}
