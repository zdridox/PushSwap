#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "./libft/libft.h"

typedef struct s_node {
    int val;
    int index;
    struct s_node *next;
}   t_node;

typedef struct s_stack {
    t_node *head;
    //t_node *tail;
}   t_stack;

typedef struct s_data {
    t_stack *a;
    t_stack *b;
}   t_data;

void stack_tests(t_data *stacks);

t_stack *parse_stack(char **args);
void int_swap(int *a, int *b);
int *char_tab_to_int_tab(char **args);
void	bubble_sort(int *tab, int size);
void stack_indexing(t_stack *stack, int size, int *tab);
int stack_len(t_stack *stack);
void swap(t_stack *stack);
void push(t_stack *from, t_stack *to);
t_node *get_tail_prev(t_stack *stack);
void shift_up(t_stack *stack);
void shift_down(t_stack *stack);

#endif