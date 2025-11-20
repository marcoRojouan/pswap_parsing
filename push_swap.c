/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:56:25 by loup              #+#    #+#             */
/*   Updated: 2025/11/20 16:03:46 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"
#include <stdio.h>
#include <unistd.h>

char    **rearrange_args(int ac, char **av)
{
    char *joined_args;
    char **splitted_args;
    int i;

    joined_args = malloc(sizeof(char) * 1);
    if (!joined_args)
        return (NULL);
    joined_args[0] = '\0';
    i = 1;
    while (i < ac)
    {
        joined_args = ft_strjoin(joined_args ,av[i]);
        if (!joined_args)
            return (NULL);
        i++;
    }
    splitted_args = ft_split(joined_args);
    if (!splitted_args)
        return (NULL);
    return (splitted_args);
}

char    **parsing_args(int ac, char **av)
{
    char **parsed_args;
    
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
int main(int ac, char **av)
{
	(void)ac;
	int i = 0;
	int iter = 0;
    char **args;
	t_stack a_stack;
	t_pslst *cur_node;
	a_stack.top = NULL;
	a_stack.size = 0;

    args = parsing_args(ac, av);
    if (!args)
    {
        return (0);
    }
	while (args[i])
	{
		cur_node = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(&a_stack.top, cur_node, a_stack.size);
		a_stack.size++;
		i++;
	}
	ft_lst_put_index(a_stack.top, a_stack.size);
	while (a_stack.top && iter < i)
	{
		printf("data[%d] = %d\n",a_stack.top->index, a_stack.top->data);
		a_stack.top = a_stack.top->next;
		iter++;
	}
}
