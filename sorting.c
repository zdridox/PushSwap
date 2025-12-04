#include "push_swap.h"

void sort_3(t_stack *a)
{
    int first = a->head->val;
    int second = a->head->next->val;
    int third = a->head->next->next->val;

    if (first > second && second < third && first < third)
        sa(a);
    else if (first > second && second > third)
    {
        sa(a);
        rra(a);
    }
    else if (first > second && second < third && first > third)
        ra(a);
    else if (first < second && second > third && first < third)
    {
        sa(a);
        ra(a);
    }
    else if (first < second && second > third && first > third)
        rra(a);
}

void sort_4_5(t_stack *a, t_stack *b)
{
    int min;
    int i;
    int size = stack_len(a);

    i = 0;
    while (i++ < size - 3)
    {
        min = get_min(a);
        while (a->head->val != min)
        {
            if (find_position(a, min) <= stack_len(a) / 2)
                ra(a);
            else
                rra(a);
        }
        pb(a, b);
    }
    sort_3(a);
    while (stack_len(b) > 0)
        pa(a, b);
}

void radix_sort(t_stack *a, t_stack *b)
{
    int max_num = stack_len(a) - 1;
    int max_bits = 0;
    int i;
    int j;
    int size;

    while ((max_num >> max_bits) != 0)
        max_bits++;
    i = -1;
    while (++i < max_bits)
    {
        j = -1;
        size = stack_len(a);
        while (++j < size)
        {
            if (((a->head->index >> i) & 1) == 1)
                ra(a);
            else
                pb(a, b);
        }
        while (stack_len(b) > 0)
            pa(a, b);
    }
}