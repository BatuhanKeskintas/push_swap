/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 08:39:57 by bkeskint          #+#    #+#             */
/*   Updated: 2021/10/27 19:43:10 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_function(t_stack *stack)
{
	free(stack->stack_a);
	free(stack->stack_b);
	free(stack->sorted_stack);
}

void	error_handler(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		if ((ft_atolong(argv[i + 1]) > 2147483647))
			ft_exit("Error - MAXINT \n");
		while (argv[i + 1][j])
		{
			if (argv[i + 1][j] < '0' || argv[i + 1][j] > '9')
				ft_exit("Error - Non Numeric Parameters \n");
			j++;
		}
		j = i + 1;
		while (j < argc - 1)
		{
			if (ft_atolong (argv[i + 1]) == ft_atolong (argv[j + 1]))
				ft_exit("Error - Duplicate Numeric Paramaters \n");
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	stack;

	if (argc < 3)
		ft_exit("");
	error_handler (argc, argv);
	create_stacks (argc, argv, &stack);
	free_function(&stack);
	return (0);
}
