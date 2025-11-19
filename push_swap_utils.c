/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loup <loup@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:56:27 by loup              #+#    #+#             */
/*   Updated: 2025/11/19 21:44:37 by loup             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pswap.h"

static int ft_strlen(char *str)
{
    int i = 0;
    
    while (str[i])
        i++;
    return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
    int     need_space;
	char	*tab;

    need_space = (ft_strlen(s1) > 0);
	tab = malloc(ft_strlen(s1) + ft_strlen(s2) + need_space + 1);
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		tab[j++] = s1[i++];
	i = 0;
    if (need_space)
    {
        tab[j++] = ' ';
    }
	while (s2[i])
		tab[j++] = s2[i++];
	tab[j] = '\0';
	free(s1);
	return (tab);
}
