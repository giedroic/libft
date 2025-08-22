#include "../include/ft_lstmap.h"
#include "../include/libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*new_node;
	t_list	*current;	

	lst_new = NULL;
	while (lst != NULL)
	{
		current = lst;
		new_node = ft_lstnew(f(current->content));
		if (!new_node)
		{
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_new, new_node);
		lst = lst->next;
		free(current);
	}
	return (lst_new);
}

