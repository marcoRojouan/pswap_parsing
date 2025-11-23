/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:56:25 by loup              #+#    #+#             */
/*   Updated: 2025/11/23 13:51:38 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"
#include <stdio.h>
#include <unistd.h>

char	**rearrange_args(int ac, char **av)
{
	char	*joined_args;
	char	**splitted_args;
	int		i;

	joined_args = malloc(sizeof(char) * 1);
	if (!joined_args)
		return (NULL);
	joined_args[0] = '\0';
	i = 1;
	while (i < ac)
	{
		joined_args = ft_strjoin(joined_args, av[i]);
		if (!joined_args)
			return (NULL);
		i++;
	}
	splitted_args = ft_split(joined_args);
	if (!splitted_args)
		return (NULL);
	return (splitted_args);
}

char	**parsing_args(int ac, char **av)
{
	char	**parsed_args;

	parsed_args = rearrange_args(ac, av);
	if (!parsed_args)
		return (0);
	if (is_valid_data(parsed_args))
	{
		write(1, "ERROR TA MERE", 13);
		free(parsed_args);
		return (NULL);
	}
	return (parsed_args);
}

t_stack	fill_stack(char **args, t_stack stack)
{
	t_pslst *cur_node;
	int		i; 
	
	i = 0;
	while (args[i])
	{
		cur_node = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(&stack.top, cur_node, stack.size);
		stack.size++;
		i++;
	}
	ft_lst_put_index(stack.top, stack.size);
	return (stack);
}

int     main(int ac, char **av)
{
	(void)ac;
	int		iter = 0;
    char	**args;
	t_stack	a_stack;
	t_stack	b_stack;

	a_stack.top = NULL;
	a_stack.size = 0;
	b_stack.top = NULL;
	b_stack.size = 0;
    args = parsing_args(ac, av);
    if (!args)
    {
        return (0);
    }
	a_stack = fill_stack(args, a_stack);
	if (is_sorted(a_stack))
		return (0);
}
