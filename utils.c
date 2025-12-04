#include "push_swap.h"

void int_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *tab, int size)
{
    int step;
    int i;
    int temp;

    step = 0;
    while (step < size - 1)
    {
        i = 0;
        while (i < size - step - 1)
        {
            if (tab[i] > tab[i + 1])
                int_swap(&tab[i], &tab[i + 1]);
            i++;
        }
        step++;
    }
}

int *char_tab_to_int_tab(char **args)
{
    int size;
    int i;
    int *tab;

    size = 0;
    while (args[size])
        size++;
    i = 0;
    tab = malloc(sizeof(int) * size);
    while (i < size)
    {
        tab[i] = ft_atoi(args[i]);
        i++;
    }
    return (tab);
}

void free_strarr(char **arr)
{
    int i;

    i = 0;
    while (arr[i])
        free(arr[i++]);
    free(arr);
}