/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_parsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:15:42 by mrojouan          #+#    #+#             */
/*   Updated: 2025/11/24 13:38:50 by mrojouan         ###   ########.fr       */
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

void     push_swap_parsing(int ac, char **av)
{
	
	int		iter = 0;
    char	**args;
	t_stack	a_stack;

	a_stack.top = NULL;
	a_stack.size = 0;
	args = parsing_args(ac, av);
    if (!args)
    {
        return ;
    }
	a_stack = fill_stack(args, a_stack);
}