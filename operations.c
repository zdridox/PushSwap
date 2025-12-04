#include "push_swap.h"

void sa(t_stack *stack)
{
    swap(stack);
    ft_printf("sa\n");
}

void sb(t_stack *stack)
{
    swap(stack);
    ft_printf("sb\n");
}

void ss(t_stack *a, t_stack *b)
{
    swap(a);
    swap(b);
    ft_printf("ss\n");
}

void pa(t_stack *a, t_stack *b)
{
    push(b, a);
    ft_printf("pa\n");
}

void pb(t_stack *a, t_stack *b)
{
    push(a, b);
    ft_printf("pb\n");
}

void ra(t_stack *stack)
{
    shift_up(stack);
    ft_printf("ra\n");
}

void rb(t_stack *stack)
{
    shift_up(stack);
    ft_printf("rb\n");
}

void rr(t_stack *a, t_stack *b)
{
    shift_up(a);
    shift_up(b);
    ft_printf("rr\n");
}

void rra(t_stack *stack)
{
    shift_down(stack);
    ft_printf("rra\n");
}

void rrb(t_stack *stack)
{
    shift_down(stack);
    ft_printf("rrb\n");
}

void rrr(t_stack *a, t_stack *b)
{
    shift_down(a);
    shift_down(b);
    ft_printf("rrr\n");
}
