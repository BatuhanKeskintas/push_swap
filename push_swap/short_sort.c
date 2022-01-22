/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:13:53 by bkeskint          #+#    #+#             */
/*   Updated: 2021/10/27 01:08:40 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	decider4(t_stack *stack)
{
	if (stack->index == 0)
		pb(stack);
	else if (stack->index == 1)
	{	
		sa(stack);
		pb(stack);
	}
	else if (stack->index == 2)
	{
		ra(stack);
		sa(stack);
		pb(stack);
	}
	else if (stack->index == 3)
	{
		rra(stack);
		pb(stack);
	}
}

void	decider5(t_stack *stack)
{
	if (stack->index == 0)
		pb(stack);
	else if (stack->index == 1)
	{	
		sa(stack);
		pb(stack);
	}
	else if (stack->index == 2)
	{
		ra(stack);
		sa(stack);
		pb(stack);
	}
	else if (stack->index == 3)
	{
		rra(stack);
		rra(stack);
		pb(stack);
	}
	else if (stack->index == 4)
	{
		rra(stack);
		pb(stack);
	}
}

/*
1-3-2
3-1-2
3-2-1
2-3-1
2-1-3
*/

void	sort_three(t_stack *stack)
{
	if (is_a_sorted(stack))
		return ;
	else if ((stack->stack_a[0] < stack->stack_a[1])
		&& (stack->stack_a[2] < stack->stack_a[1])
		&& (stack->stack_a[0] < stack->stack_a[2]))
	{
		sa(stack);
		ra(stack);
	}
	else if ((stack->stack_a[1] < stack->stack_a[0])
		&& (stack->stack_a[1] < stack->stack_a[2])
		&& (stack->stack_a[2] < stack->stack_a[0]))
		ra(stack);
	else if ((stack->stack_a[1] < stack->stack_a[0])
		&& (stack->stack_a[2] < stack->stack_a[1]))
	{
		sa(stack);
		rra(stack);
	}
	else if ((stack->stack_a[0] < stack->stack_a[1])
		&& (stack->stack_a[2] < stack->stack_a[1])
		&& (stack->stack_a[2] < stack->stack_a[0]))
		rra(stack);
	else
		sa(stack);
}

void	helper(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	stack->temp = stack->stack_a[i];
	stack->index = 0;
	while (i < stack->size_a)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->stack_a[i] > stack->stack_a[j]
				&& stack->stack_a[j] < stack->temp)
			{
				stack->temp = stack->stack_a[j];
				stack->index = j;
			}
			j++;
		}
		i++;
	}
	if (stack->size_a == 5)
		decider5 (stack);
	else
		decider4 (stack);
}

void	sort_four_five(t_stack *stack)
{
	while (stack->size_a > 3)
	{
		helper(stack);
	}
	sort_three(stack);
	pa(stack);
	pa(stack);
}
