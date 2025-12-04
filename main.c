#include "push_swap.h"

int main(int argc, char **argv)
{
    t_data *stacks;
    char **args;

    stacks = malloc(sizeof(t_data));
    args = ft_split(argv[1], ' ');
    stacks->a = parse_stack(args);
    stacks->b = malloc(sizeof(t_stack));
    stacks->b->head = NULL;
    if (validate_input(args) != 0)
        return (free_all(args, stacks), ft_printf("Error\nInvalid input."), 1);
    stack_indexing(stacks->a, stack_len(stacks->a), char_tab_to_int_tab(args));
    if (!is_sorted(stacks->a))
    {
        if (stack_len(stacks->a) == 2)
            sa(stacks->a);
        else if (stack_len(stacks->a) == 3)
            sort_3(stacks->a);
        else if (stack_len(stacks->a) <= 5)
            sort_4_5(stacks->a, stacks->b);
        else
            radix_sort(stacks->a, stacks->b);
    }
    return (free_all(args, stacks), 0);
}
