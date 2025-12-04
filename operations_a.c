#include "push_swap.h"

void swap(t_stack *stack) {
    t_node *temp;

    temp = stack->head->next;
    stack->head->next = temp->next;
    temp->next = stack->head;
    stack->head = temp;
}

void push(t_stack *from, t_stack *to) {
    t_node *temp;

    temp = to->head;
    to->head = from->head;
    from->head = from->head->next;
    to->head->next = temp;
}

void shift_up(t_stack *stack) {
    t_node *tail_prev;

    tail_prev = get_tail_prev(stack);
    tail_prev->next->next = stack->head;
    stack->head = stack->head->next;
    tail_prev->next->next->next = NULL;
}

void shift_down(t_stack *stack) {
    t_node *tail_prev;

    tail_prev = get_tail_prev(stack);
    tail_prev->next->next = stack->head;
    stack->head = tail_prev->next;
    tail_prev->next = NULL;
}