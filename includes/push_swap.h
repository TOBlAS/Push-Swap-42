/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobiaslst <tobiaslst@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:16:43 by tcaborde          #+#    #+#             */
/*   Updated: 2022/11/16 11:08:15 by tobiaslst        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include "../libft/libft.h"
# include <limits.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;

}					t_node;

void		rra(t_node **stack_a);
void		rrb(t_node **stack_b);
void		rrr(t_node **stack_a, t_node **stack_b);
void		pa(t_node **stack_b, t_node **stack_a);
void		pb(t_node **stack_a, t_node **stack_b);
void		ra(t_node **stack_a);
void		rb(t_node **stack_b);
void		rr(t_node **stack_a, t_node **stack_b);
void		sa(t_node **stack_a);
void		sb(t_node **stack_b);
void		ss(t_node **stack_a, t_node **stack_b);
t_node		*create_node(int nb);
t_node		*node_last(t_node *head);
void		add_node_top(t_node **stack, t_node *node);
void		add_node_bot(t_node **stack, t_node *node);
void		create_stack(char **argv, int argc, t_node **stack);
void		free_all(char **str);
void		error(char *str);
int			checking_entry(int argc, char **argv);
int			stack_is_sorted(t_node **stack);
int			stack_size(t_node *head);
void		swap(t_node **stack);
void		push(t_node **stack_took, t_node **stack_drop);
void		rotate(t_node **stack);
void		rev_rotate(t_node **stack);
void		free_stack(t_node **stack);
void		put_index(t_node **stack);
void		little_sorting(t_node	**stack_a, t_node	**stack_b);
void		radix_sort(t_node **stack_a, t_node **stack_b);
void		sort_three(t_node **stack_a);
void		sort_four(t_node **stack_a);
void		sort_five(t_node	**stack_a, t_node	**stack_b);

#endif
