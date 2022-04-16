#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*save;

	save = *lst;
	while (save)
	{
		tmp = save->next;
		ft_lstdelone(save, del);
		save = tmp;
	}
	*lst = NULL;
}