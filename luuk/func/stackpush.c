/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stackpush.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/23 10:59:38 by luconsta      #+#    #+#                 */
/*   Updated: 2026/01/26 12:46:02 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack **dst, t_stack **src)
{
	t_stack	*active_node;

	if (!*src)
		return ;
	active_node = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	active_node->prev = NULL;
	if (!*dst)
	{
		*dst = active_node;
		active_node->next = NULL;
	}
	else
	{
		active_node->next = *dst;
		active_node->next->prev = active_node;
		*dst = active_node;
	}
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	write (1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	push(b, a);
	write (1, "pb\n", 3);
}
