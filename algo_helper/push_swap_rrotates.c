/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_rrotates.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:56:04 by mrojouan          #+#    #+#             */
/*   Updated: 2025/11/28 14:00:14 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

void	rra(t_stack *a_stack, int flag)
{
	
	if (flag)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *b_stack, int flag)
{
	
	if (flag)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *a_stack, t_stack *b_stack)
{
	
	rra(a_stack, 0);
	rrb(b_stack, 0);
	write(1, "rrr\n", 4);
}