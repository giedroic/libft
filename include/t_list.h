#ifndef T_LIST_H
# define T_LIST_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
#endif
