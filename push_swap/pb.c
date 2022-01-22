/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:31:20 by bkeskint          #+#    #+#             */
/*   Updated: 2021/10/26 23:33:01 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_to_b(int temp, t_stack *stack)
{
	int	i;

	i = 0;
	i = stack->size_b;
	while (i > 0)
	{
		stack->stack_b[i] = stack->stack_b[i - 1];
		i--;
	}
	stack->stack_b[0] = temp;
	stack->size_b++;
}

void	del_from_a(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[i] = 0;
	stack->size_a--;
}

void	pb(t_stack *stack)
{
	int	temp;

	if (stack->size_a > 0)
	{
		temp = stack->stack_a[0];
		add_to_b(temp, stack);
		del_from_a(stack);
	}
	write (1, "pb\n", 3);
}
