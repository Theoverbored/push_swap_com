/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/09 11:49:13 by luconsta      #+#    #+#                 */
/*   Updated: 2026/01/26 12:31:14 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>

typedef struct t_stack
{
	int				num;
	int				index;
	int				cost;
	bool			lowest_cost;
	bool			above_med;
	struct t_stack	*next;
	struct t_stack	*prev;
	struct t_stack	*target;
}		t_stack;

//Node initiation
void		init_a(t_stack *a, t_stack *b);
void		init_b(t_stack *a, t_stack *b);
void		set_cheapest(t_stack *stack);
void		find_cost(t_stack *a, t_stack *b);
void		target_node_a(t_stack *a, t_stack *b);
void		set_target_b(t_stack *a, t_stack *b);
long long	ft_atoll(const char *nptr);

//Stack initiation
void		write_node(t_stack **stack, int n);
void		fill_stack_a(t_stack **a, char **argv);
t_stack		*find_cheapest(t_stack *stack);
void		prep_push(t_stack **stack, t_stack *top_node, char stack_name);

//Stack utils
int			stack_len(t_stack *stack);
t_stack		*find_last(t_stack *stack);
t_stack		*find_max(t_stack *stack);
t_stack		*find_min(t_stack *stack);

//Algorithm
bool		is_sorted(t_stack *stack);
void		find_median(t_stack *stack);
void		sort_3(t_stack **stack);
void		turk_algo(t_stack **a, t_stack **b);
void		min_top(t_stack **a);

//Errors
int			error_syntax(char *arg);
int			error_dup(t_stack *stack, int n);
void		free_stack(t_stack **stack);
void		free_errors(t_stack **stack);

//Commands
//Swap
void		swap(t_stack **stack);
void		sa(t_stack **a);
void		sb(t_stack **b);
void		ss(t_stack **a, t_stack **b);

//Rotate
void		rotate(t_stack **stack);
void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);

//Reverse rotate
void		rev_rotate(t_stack **stack);
void		rra(t_stack **a);
void		rrb(t_stack **b);
void		rrr(t_stack **a, t_stack **b);

//Push
void		push(t_stack **dst, t_stack **src);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);

#endif
