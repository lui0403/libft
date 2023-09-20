/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojiebina <kojiebina@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 02:56:52 by luebina           #+#    #+#             */
/*   Updated: 2023/09/21 05:50:08 by kojiebina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr;
	char	*ptr2;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (dst);
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

// int main()
// {
//     // テスト用のデータ
//     char *src = NULL;
//     char *dest1 = NULL;
//     char *dest2 = NULL;

//     // 自作の ft_memmove を使用してコピー
//     ft_memmove(dest1, src, 5);

//     // 標準ライブラリの memmove を使用してコピー
//     memmove(dest2, src, 5);

// 	printf("%s, %s", dest1, dest2);

//     return 0;
// }