/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rev_rotate_func.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/18 12:00:27 by luconsta      #+#    #+#                 */
/*   Updated: 2025/12/18 12:07:29 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdlib.h>
#include <stdio.h>

void	rev_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = find_last(*stack);
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
	*stack = last;
}

void	rra(t_stack **a)
{
	rev_rotate(a);
	write (1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rev_rotate(b);
	write (1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
	write (1, "rrr\n", 4);
}
