/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojiebina <kojiebina@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 05:52:46 by kojiebina         #+#    #+#             */
/*   Updated: 2023/09/21 05:54:53 by kojiebina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *p1;
    unsigned char *p2;

    if (n == 0)
        return (0);
    p1 = (unsigned char*)s1;
    p2 = (unsigned char*)s2;
    while (--n && *p1 == *p2)
    {
        p1++;
        p2++;
    }
    return (*p1 - *p2);
}
