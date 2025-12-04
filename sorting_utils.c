/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:01:30 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/12/04 18:57:30 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_stack *stack)
{
	t_node	*current;
	int		min;

	if (!stack->head)
		return (0);
	current = stack->head;
	min = current->val;
	while (current)
	{
		if (current->val < min)
			min = current->val;
		current = current->next;
	}
	return (min);
}

int	get_max(t_stack *stack)
{
	t_node	*current;
	int		max;

	if (!stack->head)
		return (0);
	current = stack->head;
	max = current->val;
	while (current)
	{
		if (current->val > max)
			max = current->val;
		current = current->next;
	}
	return (max);
}

int	find_position(t_stack *a, int value)
{
	t_node	*current;
	int		i;

	i = 0;
	current = a->head;
	while (current)
	{
		if (current->val == value)
			return (i);
		i++;
		current = current->next;
	}
	return (-1);
}

int	is_sorted(t_stack *stack)
{
	t_node	*current;

	current = stack->head;
	while (current->next)
	{
		if (current->val > current->next->val)
			return (0);
		current = current->next;
	}
	return (1);
}
