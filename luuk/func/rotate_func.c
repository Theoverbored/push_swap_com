/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate_func.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/09 11:10:40 by luconsta      #+#    #+#                 */
/*   Updated: 2026/01/26 12:36:29 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdlib.h>
#include <stdio.h>

void	rotate(t_stack **stack)
{
	t_stack		*last;

	if (!*stack || !(*stack)->next)
		return ;
	last = find_last(*stack);
	last->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
}

void	ra(t_stack **a)
{
	rotate(a);
	write (1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rotate(b);
	write (1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	write (1, "rr\n", 3);
}
