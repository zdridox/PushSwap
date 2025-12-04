/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:01:11 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/12/04 19:07:36 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node	*p;
	t_node	*p2;

	p = stack->head;
	while (p != NULL)
	{
		p2 = p;
		p = p->next;
		free(p2);
	}
	free(stack);
}
