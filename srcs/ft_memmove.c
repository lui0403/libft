/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 02:56:52 by luebina           #+#    #+#             */
/*   Updated: 2023/09/20 05:05:07 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr;
	char	*ptr2;
	size_t	i;

	ptr = (char *)dst;
	ptr2 = (char *)src;
	i = 0;
	if (ptr2 < ptr)
		while (len--)
			ptr[len] = ptr2[len];
	else
	{
		while (i < len)
		{
			ptr[i] = ptr2[i];
			i++;
		}
	}
	return (dst);
}