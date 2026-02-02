/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_util.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/17 15:48:30 by luconsta      #+#    #+#                 */
/*   Updated: 2026/01/26 12:43:26 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_len(t_stack *stack)
{
	int	len;

	len = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		len++;
		stack = stack->next;
	}
	return (len);
}

t_stack	*find_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_stack	*find_max(t_stack *stack)
{
	t_stack	*max_num;
	int		max;

	max = INT_MIN;
	while (stack)
	{
		if (stack->num > max)
		{
			max = stack->num;
			max_num = stack;
		}
		stack = stack->next;
	}
	return (max_num);
}

t_stack	*find_min(t_stack *stack)
{
	t_stack	*min_num;
	int		min;

	min = INT_MAX;
	while (stack)
	{
		if (stack->num < min)
		{
			min = stack->num;
			min_num = stack;
		}
		stack = stack->next;
	}
	return (min_num);
}

long long	ft_atoll(const char *nptr)
{
	int			sign;
	long long	out;

	sign = 1;
	out = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr < 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		out = out * 10 + (*nptr - '0');
		nptr++;
	}
	return (out * sign);
}
