#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*element;

	if (!f || !lst)
		return (0);
	element = ft_lstnew((*f)(lst->content));
	lst2 = element;
	lst = lst->next;
	while (lst)
	{
		element = ft_lstnew((*f)(lst->content));
		if (!element)
			ft_lstclear(&lst2, del);
		lst = lst->next;
		ft_lstadd_front(&element, lst2);
	}
	return (lst2);
}