#ifndef FT_LSTMAP_H
# define FT_LSTMAP_H
# include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
