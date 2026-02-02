/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/17 15:48:13 by luconsta      #+#    #+#                 */
/*   Updated: 2026/01/26 12:36:08 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	write_node(t_stack **stack, int n)
{
	t_stack		*node;
	t_stack		*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->next = NULL;
	node->num = n;
	node->lowest_cost = 0;
	if (!(*stack))
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

void	fill_stack_a(t_stack **a, char **argv)
{
	int			i;
	long long	nll;
	int			n;

	i = 0;
	while (argv[i])
	{
		if (error_syntax(argv[i]))
			free_errors(a);
		nll = ft_atoll(argv[i]);
		if (nll > INT_MAX || nll < INT_MIN)
			free_errors(a);
		n = (int)nll;
		if (error_dup(*a, n))
			free_errors(a);
		write_node(a, n);
		i++;
	}
}

t_stack	*find_cheapest(t_stack *stack)
{
	while (stack)
	{
		if (stack->lowest_cost)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	prep_push(t_stack **stack, t_stack *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_med)
				ra(stack);
			else
				rra(stack);
		}
		else
		{
			if (top_node->above_med)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

void	sort_3(t_stack **stack)
{
	t_stack	*biggest_node;

	biggest_node = find_max(*stack);
	if (biggest_node == *stack)
		ra(stack);
	else if ((*stack)->next == biggest_node)
		rra(stack);
	if ((*stack)->num > (*stack)->next->num)
		sa(stack);
}
