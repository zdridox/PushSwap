/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:56:06 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/12/04 18:58:11 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_indexing(t_stack *stack, int size, int *tab)
{
	int		i;
	t_node	*p;

	p = stack->head;
	bubble_sort(tab, size);
	while (p)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] == p->val)
				p->index = i;
			i++;
		}
		p = p->next;
	}
	free(tab);
}
