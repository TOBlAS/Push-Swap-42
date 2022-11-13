/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobiaslst <tobiaslst@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:07:57 by tobiaslst         #+#    #+#             */
/*   Updated: 2022/11/13 20:35:08 by tobiaslst        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>
#include <limits.h>

int	stack_is_not_sorted(t_node	**stack)
{
	t_node	*head;

	head = *stack;
	if (!stack)
		exit(1);
	while (head->next)
	{
		if (head->index > head->next->index)
			return (1);
		head = head->next;
	}
	return (0);
}

static	t_node	*get_min(t_node **stack)
{
	t_node	*head;
	t_node	*tmp;
	int		min;

	min = INT_MAX;
	tmp = NULL;
	head = *stack;
	while (head)
	{
		if (head->index == -1)
		{
			if (head->value < min)
			{
				min = head->value;
				tmp = head;
			}
		}
		head = head->next;
	}
	return (tmp);
}

int	got_index(t_node **stack)
{
	t_node	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->index == -1)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	put_index(t_node	**stack)
{
	t_node	*head;
	int		index;

	index = 0;
	while (got_index(stack))
	{
		head = get_min(stack);
		if (!head)
			return ;
		head->index = index;
		index++;
	}
}

void	little_sorting(t_node	**stack)
{
	int	stack_taille;

	if (!stack_is_not_sorted(stack) || stack_size(*stack) == 0
		|| stack_size(*stack) == 1)
			return ;
	stack_taille = stack_size(*stack);
	if (stack_taille == 2)
		sa(stack);
	else if (stack_taille == 3)
		sort_three(stack);
	else if (stack_taille == 4)
		sort_four(stack);
	/*else if (stack_taille == 5)
		// tri ici pour 5 values*/
}

void	free_stack(t_node	**stack)
{
	t_node	*head;
	t_node	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}
