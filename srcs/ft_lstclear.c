/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojiebina <kojiebina@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:36:55 by kojiebina         #+#    #+#             */
/*   Updated: 2023/09/26 17:43:50 by kojiebina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *tmp;

    while (*lst)
    {
        tmp = *lst;
        *lst = (*lst)->next;
        ft_lstdelone(tmp, del);
    }
}
