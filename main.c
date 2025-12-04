#include "push_swap.h"

int main(int argc, char **argv) {
    t_data *stacks;
    char **args;

    stacks = malloc(sizeof(t_data));
    args = ft_split(argv[1], ' ');
    stacks->a = parse_stack(args);
    stacks->b = malloc(sizeof(t_stack));
    stacks->b->head = NULL;
    stack_indexing(stacks->a, stack_len(stacks->a), char_tab_to_int_tab(args));
    stack_tests(stacks);
    push(stacks->a, stacks->b);
    push(stacks->a, stacks->b);
    swap(stacks->b);
    swap(stacks->a);
    shift_up(stacks->a);
    shift_down(stacks->a);
    shift_down(stacks->b);
    shift_up(stacks->b);
    ft_printf("\nafter operations\n\n");
    stack_tests(stacks);
}
