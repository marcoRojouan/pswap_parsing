/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pswap.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 21:00:27 by loup              #+#    #+#             */
/*   Updated: 2025/11/23 11:44:54 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSWAP_H
# define PSWAP_H

# include <stdlib.h>

typedef struct s_pslst
{
	int				index;
	int				data;
	struct s_pslst	*next;
	struct s_pslst	*prev;
}	t_pslst;

typedef struct s_stack
{
	t_pslst	*top;
	int		size;
}	t_stack;

int		is_sorted(t_stack stack);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char *str);
int		is_valid_data(char **args);
int		ft_atoi(const char *nptr);
int		white_space(char c);
t_pslst	*ft_lstnew(int content);
void	ft_lstadd_back(t_pslst **lst, t_pslst *new, int size);
int		ft_lstsize(t_pslst *lst);
void	ft_lst_put_index(t_pslst *lst, int size);

#endif