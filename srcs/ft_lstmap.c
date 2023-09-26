/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojiebina <kojiebina@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:44:17 by kojiebina         #+#    #+#             */
/*   Updated: 2023/09/26 19:33:31 by kojiebina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *tmp;

    if (!lst || !f)
        return (NULL);
    new = NULL;
    while (lst)
    {
        tmp = ft_lstnew(f(lst->content));
        if (!tmp)
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        ft_lstadd_back(&new, tmp);
        lst = lst->next;
    }
    return (new);
}
