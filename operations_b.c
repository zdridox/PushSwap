/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:56:00 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/12/04 18:56:00 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack *stack)
{
	shift_up(stack);
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	shift_up(a);
	shift_up(b);
	ft_printf("rr\n");
}

void	rra(t_stack *stack)
{
	shift_down(stack);
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	shift_down(stack);
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	shift_down(a);
	shift_down(b);
	ft_printf("rrr\n");
}
