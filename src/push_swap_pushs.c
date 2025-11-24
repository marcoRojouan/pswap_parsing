/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_pushs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:16:25 by mrojouan          #+#    #+#             */
/*   Updated: 2025/11/24 13:37:52 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	pa(t_stack *a_stack, t_stack *b_stack)
{
	t_pslst *tmp;

	if (!b_stack || !b_stack->top)
		return ;
	tmp = b_stack->top;
	b_stack->top = b_stack->top->next;
	tmp->next = a_stack->top;
	a_stack->top = tmp;
	b_stack->size--;
	a_stack->size++;
	write(1, "pa\n", 3);
}

void	pb(t_stack *b_stack, t_stack *a_stack)
{
	t_pslst *tmp;

	if (!a_stack || !a_stack->top)
		return ;
	tmp = a_stack->top;
	a_stack->top = a_stack->top->next;
	tmp->next = b_stack->top;
	b_stack->top = tmp;
	a_stack->size--;
	b_stack->size++;
	write(1, "pb\n", 3);
}

