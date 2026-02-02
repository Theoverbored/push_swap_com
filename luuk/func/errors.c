/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   errors.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/17 12:04:59 by luconsta      #+#    #+#                 */
/*   Updated: 2026/01/26 12:33:56 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	error_syntax(char *arg)
{
	int	i;

	if (!arg || !*arg)
		return (1);
	i = 0;
	if (arg[0] == '+' || arg[0] == '-')
	{
		if (!arg[1])
			return (1);
		i = 1;
	}
	while (arg[i])
	{
		if (arg[i] < '0' || arg[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	error_dup(t_stack *stack, int n)
{
	if (!stack)
		return (0);
	while (stack)
	{
		if (stack->num == n)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		current->num = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	free_errors(t_stack **stack)
{
	free_stack(stack);
	write(2, "Error\n", 6);
	exit(1);
}
