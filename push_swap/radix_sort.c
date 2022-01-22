/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:19:54 by bkeskint          #+#    #+#             */
/*   Updated: 2021/10/27 17:51:28 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_sort(t_stack *stack)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < stack->size)
	{
		j = 0;
		while (i + j < stack->size)
		{
			if (stack->sorted_stack[i + j] < stack->sorted_stack[i])
			{
				temp = stack->sorted_stack[i];
				stack->sorted_stack[i] = stack->sorted_stack[i + j];
				stack->sorted_stack[i + j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	max_bit(t_stack *stack)
{
	stack->bit = 0;
	while (((stack->size - 1) >> stack->bit) != 0)
		stack->bit++;
}

void	find_index(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a)
	{
		j = 0;
		while (stack->stack_a[i] != stack->sorted_stack[j])
			j++;
		stack->stack_a[i] = j;
		i++;
	}
}

int	is_a_sorted(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->stack_a[i] < stack->stack_a[j])
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

void	radix_sort(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->bit)
	{
		j = 0;
		while (j < stack->size)
		{
			if (((stack->stack_a[0] >> i) & 1) == 1)
				ra(stack);
			else
				pb(stack);
			j++;
		}
		while (stack->size_b != 0)
			pa(stack);
		i++;
	}
}
