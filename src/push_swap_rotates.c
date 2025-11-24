/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rotates.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:00:48 by mrojouan          #+#    #+#             */
/*   Updated: 2025/11/24 12:07:25 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	ra(t_stack *a_stack, int flag)
{
	if (!a_stack || !a_stack->top || a_stack->size < 2)
		return ;
	a_stack->top = a_stack->top->next;
	if (flag)
		write(1, "ra\n", 3);
}

void	rb(t_stack *b_stack, int flag)
{	
	if (!b_stack || !b_stack->top || b_stack->size < 2)
		return ;

	b_stack->top = b_stack->top->next;
	if (flag)
		write(1, "rb\n", 3);
}

void	rr(t_stack *a_stack, t_stack *b_stack)
{
	if ((!a_stack || a_stack->size < 2) 
		|| (!b_stack || b_stack->size < 2))
		return ;
	ra(a_stack, 0);
	rb(b_stack, 0);
	write(1, "rr\n", 3);
}