/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_swaps.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 13:56:37 by mrojouan          #+#    #+#             */
/*   Updated: 2025/11/28 14:00:33 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	sa(t_stack *stack, int flag)
{	
	
	
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	sb(t_stack *stack, int flag)
{
	 
	
	
	if (flag == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stack *a_stack, t_stack *b_stack)
{
	
	sa(a_stack, 0);
	sb(b_stack, 0);
	write(1, "ss\n", 3);
}