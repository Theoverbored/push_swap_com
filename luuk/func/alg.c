/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   alg.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/19 11:13:04 by luconsta      #+#    #+#                 */
/*   Updated: 2026/01/26 13:03:48 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate_ab(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
	while (*b != cheapest_node->target && *a != cheapest_node)
		rr(a, b);
	find_median(*a);
	find_median(*b);
}

static void	rev_rotate_ab(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
	while (*b != cheapest_node->target && *a != cheapest_node)
		rrr(a, b);
	find_median(*a);
	find_median(*b);
}

static void	move_a_b(t_stack **a, t_stack **b)
{
	t_stack	*cheapest_node;

	cheapest_node = find_cheapest(*a);
	if (cheapest_node->above_med && cheapest_node->target->above_med)
		rotate_ab(a, b, cheapest_node);
	else if (!(cheapest_node->above_med) && !(cheapest_node->target->above_med))
		rev_rotate_ab(a, b, cheapest_node);
	prep_push(a, cheapest_node, 'a');
	prep_push(b, cheapest_node->target, 'b');
	pb(a, b);
}

static void	move_b_a(t_stack **a, t_stack **b)
{
	prep_push(a, (*b)->target, 'a');
	pa(a, b);
}

void	turk_algo(t_stack **a, t_stack **b)
{
	if ((stack_len(*a)) > 3 && !is_sorted(*a))
		pb(a, b);
	if ((stack_len(*a)) > 3 && !is_sorted(*a))
		pb(a, b);
	while ((stack_len(*a)) > 3 && !is_sorted(*a))
	{
		init_a(*a, *b);
		move_a_b(a, b);
	}
	sort_3(a);
	while (*b)
	{
		init_b(*a, *b);
		move_b_a(a, b);
	}
	find_median(*a);
	min_top(a);
}
