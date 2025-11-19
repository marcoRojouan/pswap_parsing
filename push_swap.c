/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loup <loup@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:56:25 by loup              #+#    #+#             */
/*   Updated: 2025/11/19 21:38:47 by loup             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"
#include <stdio.h>

char *arg_parsing(int ac, char **av)
{
    char *joined_args;
    int i = 1;

    joined_args = malloc(sizeof(char) * 1);
    if (!joined_args)
        return (NULL);
    joined_args[0] = '\0';
    while (i < ac)
    {
        joined_args = ft_strjoin(joined_args ,av[i]);
        if (!joined_args)
            return (NULL);
        i++;
    }
    return (joined_args);
}

int main(int ac, char **av)
{
    char *parsed_args = arg_parsing(ac, av);
    if (!parsed_args)
        return (0);
    printf("%s", parsed_args);
    free(parsed_args);
}
