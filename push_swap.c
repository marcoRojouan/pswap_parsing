/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:56:25 by loup              #+#    #+#             */
/*   Updated: 2025/11/29 14:23:18 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"
#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	t_stack a_stack;
	t_stack	b_stack;

	i = 0;
	a_stack = push_swap_parsing(ac, av);
	if (!a_stack.values)
		return (0);
	b_stack.values = malloc(sizeof(int) * a_stack.size);
	if (!b_stack.values)
		return (0);
	if (!is_sorted(&a_stack))
	{
		if (a_stack.size == 2)
			sort_2(&a_stack);
		else if (a_stack.size == 3)
			sort_3(&a_stack);
		else if (a_stack.size == 4)
			sort_4(&a_stack, &b_stack);
		else if (a_stack.size == 5)
			sort_5(&a_stack, &b_stack);
	}
	while (i < a_stack.size)
	{
		printf("%d\n", a_stack.values[i]);
		i++;
	}
	
}