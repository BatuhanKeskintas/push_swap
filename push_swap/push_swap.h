/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 08:40:04 by bkeskint          #+#    #+#             */
/*   Updated: 2021/10/27 17:54:42 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	*sorted_stack;
	int	size_b;
	int	size_a;
	int	size;
	int	count;
	int	temp;
	int	index;
	int	bit;
}	t_stack;

void	create_stacks(int argc, char *argv[], t_stack *stack);
void	do_push_swap(t_stack *stack);
int		is_a_sorted(t_stack *stack);
void	sort_three(t_stack *stack);
void	sort_four_five(t_stack *stack);
void	decider(t_stack *stack);
void	radix_sort(t_stack *stack);
void	max_bit(t_stack *stack);
void	find_index(t_stack *stack);
void	stack_sort(t_stack *stack);
void	sa(t_stack *stack);
void	pa(t_stack *stack);
void	ra(t_stack *stack);
void	rra(t_stack *stack);
void	pb(t_stack *stack);

#endif