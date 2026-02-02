/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   alg_utils.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/19 12:18:20 by luconsta      #+#    #+#                 */
/*   Updated: 2026/01/26 13:06:07 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	is_sorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->num > stack->next->num)
			return (false);
		stack = stack->next;
	}
	return (true);
}

void	find_median(t_stack *stack)
{
	int	i;
	int	median;

	i = 0;
	if (!stack)
		return ;
	median = stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i < median)
			stack->above_med = true;
		else
			stack->above_med = false;
		stack = stack->next;
		i++;
	}
}

void	find_cost(t_stack *a, t_stack *b)
{
	int	a_len;
	int	b_len;

	a_len = stack_len(a);
	b_len = stack_len(b);
	while (a)
	{
		a->cost = a->index;
		if (!(a->above_med))
			a->cost = a_len - (a->index);
		if (a->target->above_med)
			a->cost += a->target->index;
		else
			a->cost += b_len - (a->target->index);
		a = a->next;
	}
}

void	set_cheapest(t_stack *stack)
{
	int		cheapest_found;
	t_stack	*cheapest;

	if (!stack)
		return ;
	cheapest_found = INT_MAX;
	while (stack)
	{
		if (stack->cost < cheapest_found)
		{
			cheapest_found = stack->cost;
			cheapest = stack;
		}
		stack = stack->next;
	}
	cheapest->lowest_cost = true;
}

void	min_top(t_stack **a)
{
	while ((*a)->num != find_min(*a)->num)
	{
		if (find_min(*a)->above_med)
			ra(a);
		else
			rra(a);
	}
}
