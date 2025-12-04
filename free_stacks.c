#include "push_swap.h"

void free_stack(t_stack *stack)
{
    t_node *p;
    t_node *p2;

    p = stack->head;
    while (p != NULL)
    {
        p2 = p;
        p = p->next;
        free(p2);
    }
    free(stack);
}