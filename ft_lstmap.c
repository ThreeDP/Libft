#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	size_t	size;
	t_list	*ptr;	

	size = ft_lstsize(lst);
	ptr = (t_list *) ft_calloc(size + 1, sizeof(lst));
	if (!ptr)
		return (NULL);
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
    return (ptr);
}