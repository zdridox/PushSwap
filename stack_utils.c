#include "push_swap.h"

t_node *new_node(int val)
{
    t_node *new;

    new = malloc(sizeof(t_node));
    new->next = NULL;
    new->val = val;
    new->index = -1;
    return (new);
}

int stack_len(t_stack *stack)
{
    int len;
    t_node *p;

    len = 0;
    p = stack->head;
    while (p)
    {
        len++;
        p = p->next;
    }
    return (len);
}

void stack_add_back(t_stack *stack, t_node *new)
{
    t_node *p;

    p = stack->head;
    if (p == NULL)
    {
        stack->head = new;
    }
    else
    {
        while (p->next != NULL)
            p = p->next;
        p->next = new;
    }
}

t_stack *parse_stack(char **args)
{
    t_stack *stack;
    t_node *node;
    int i;

    i = 0;
    stack = malloc(sizeof(t_stack));
    stack->head = NULL;
    while (args[i])
    {
        node = new_node(ft_atoi(args[i]));
        stack_add_back(stack, node);
        i++;
    }
    return (stack);
}

void stack_indexing(t_stack *stack, int size, int *tab)
{
    int i;
    t_node *p;

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

t_node *get_tail_prev(t_stack *stack)
{
    t_node *p;

    p = stack->head;
    while (p->next->next != NULL)
        p = p->next;
    return (p);
}

// void stack_tests(t_data *stacks) {
//     t_node *p;

//     ft_printf("--stack a--\n");
//     p = stacks->a->head;
//     while (p != NULL)
//     {
//         ft_printf("val: %d index: %d\n", p->val, p->index);
//         p = p->next;
//     }
//     ft_printf("len: %d\n", stack_len(stacks->a));
//     ft_printf("--stack b--\n");
//     p = stacks->b->head;
//     while (p != NULL)
//     {
//         ft_printf("val: %d index: %d\n", p->val, p->index);
//         p = p->next;
//     }
//     ft_printf("len: %d\n", stack_len(stacks->b));
// }