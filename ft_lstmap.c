#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new_node;

	ptr = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst -> content));
		if (!new_node)
			return (ft_lstclear(&ptr, del), ptr);
		ft_lstadd_back(&ptr, new_node);
		lst = lst -> next;
	}
    return (ptr);
}