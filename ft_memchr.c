/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:35:11 by luebina           #+#    #+#             */
/*   Updated: 2023/09/27 03:33:09 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n && str[i])
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	if (c == '\0' && str[i] == (unsigned char)c)
		return (&str[i]);
	return (NULL);
}
