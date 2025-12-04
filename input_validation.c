/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:01:14 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/12/04 17:01:16 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = 0;
		while (args[j])
		{
			if (i == j)
			{
				j++;
				continue ;
			}
			if (ft_atoi(args[i]) == ft_atoi(args[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_size(char **args)
{
	int	len;

	len = 0;
	while (args[len])
		len++;
	if (len < 2)
		return (1);
	return (0);
}

int	check_numbers(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			if (!ft_isdigit(args[i][j]))
			{
				if (!(j == 0 && args[i][j] == '-'))
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	validate_input(char **args)
{
	int	res;

	res = 0;
	res += check_duplicate(args);
	res += check_size(args);
	res += check_numbers(args);
	return (res);
}
