/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   target_nodes.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/13 11:52:52 by luconsta      #+#    #+#                 */
/*   Updated: 2026/01/26 13:06:28 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	target_a(t_stack *a, t_stack *b)
{
	t_stack	*current_b;
	t_stack	*target_node;
	long	best_index;

	while (a)
	{
		best_index = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->num < a->num && current_b->num > best_index)
			{
				best_index = current_b->num;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_index == LONG_MIN)
			a->target = find_max(b);
		else
			a->target = target_node;
		a = a->next;
	}
}

void	init_a(t_stack *a, t_stack *b)
{
	find_median(a);
	find_median(b);
	target_a(a, b);
	find_cost(a, b);
	set_cheapest(a);
}

static void	target_b(t_stack *a, t_stack *b)
{
	t_stack	*current_a;
	t_stack	*target;
	long	best_index;

	while (b)
	{
		best_index = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->num > b->num && current_a->num < best_index)
			{
				best_index = current_a->num;
				target = current_a;
			}
			current_a = current_a->next;
		}
		if (best_index == LONG_MAX)
			b->target = find_min(a);
		else
			b->target = target;
		b = b->next;
	}
}

void	init_b(t_stack *a, t_stack *b)
{
	find_median(a);
	find_median(b);
	target_b(a, b);
}
