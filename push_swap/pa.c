/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:31:23 by bkeskint          #+#    #+#             */
/*   Updated: 2021/10/27 00:56:19 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_to_a(int temp, t_stack *stack)
{
	int	i;

	i = stack->size_a;
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = temp;
	stack->size_a++;
}

void	del_from_b(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_b - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[i] = 0;
	stack->size_b--;
}

void	pa(t_stack *stack)
{
	int	temp;

	if (stack->size_b > 0)
	{
		temp = stack->stack_b[0];
		add_to_a(temp, stack);
		del_from_b(stack);
	}
	write (1, "pa\n", 3);
}
