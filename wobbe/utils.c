/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wwiedijk <wwiedijk@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/13 17:30:06 by wwiedijk      #+#    #+#                 */
/*   Updated: 2026/01/15 15:17:57 by wwiedijk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pushswap.h"

void	free_all(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*node;

	node = *stack_a;
	while (node)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
	*stack_a = NULL;
	if (!stack_b)
	{
		return ;
	}
	node = *stack_b;
	while (node)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
	*stack_b = NULL;
}

int	count_nodes(t_list *stack)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = stack;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

long	ft_atol(const char *nptr)
{
	long	num;
	int	i;
	int	plusorminus;

	num = 0;
	i = 0;
	plusorminus = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			plusorminus = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num *= 10;
		num += nptr[i] - 48;
		i++;
	}
	return (num * plusorminus);
}