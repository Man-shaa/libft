/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:06:05 by msharifi          #+#    #+#             */
/*   Updated: 2022/05/02 11:06:05 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *new;
    t_list    *result;
    void    *temp;

    if (!lst || !f)
        return (NULL);
    result = 0;
    while (lst)
    {
        temp = f(lst->content);
        new = ft_lstnew(temp);
        if (new == NULL)
            ft_lstclear(&result, del);
        ft_lstadd_back(&result, new);
        lst = lst->next;
    }
    return (result);
}