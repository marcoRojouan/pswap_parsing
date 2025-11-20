#include "pswap.h"

t_pslst	*ft_lstnew(int content)
{
	t_pslst	*new;

	new = malloc(sizeof(struct s_pslst));
	if (!new)
		return (NULL);
	new->data = content;
	new->index = 0;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_pslst	*ft_lstlast(t_pslst *lst, int size)
{
	t_pslst	*last;
	int i;

	i = 1;
	if (!lst)
		return (NULL);
	last = lst;
	while (i < size && last)
	{
		last = last->next;
		i++;
	}
	return (last);
}

void	ft_lstadd_back(t_pslst **lst, t_pslst *new, int size)
{
	t_pslst	*tmp;

	tmp = ft_lstlast(*lst, size);
	if (!tmp)
		*lst = new;
	else
	{
		tmp->next = new;
		new->next = *lst;
		new->prev = tmp;
	}
}

void	ft_lst_put_index(t_pslst *lst, int size)
{
	t_pslst	*tmp;
	int i;

	tmp = lst;
	i = 0;
	while(i < size)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
}

int	ft_lstsize(t_pslst *lst)
{
	t_pslst	*current;
	int		count;

	current = lst;
	count = 0;
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}