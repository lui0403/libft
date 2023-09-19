/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 02:56:52 by luebina           #+#    #+#             */
/*   Updated: 2023/09/20 03:41:05 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>

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

#include <string.h>

int main() {
    // テストデータの用意
    char src[] = "Hello, World!";
    char dest1[] = "cba";
    char dest2[] = "abc";

    // 自作のft_memmoveを使ってコピー
    ft_memmove(dest1, src, 3);

    // 標準のmemmoveを使ってコピー
    memmove(dest2, src, 3);

    // 比較して結果を出力
    if (strcmp(dest1, dest2) == 0) {
        printf("ft_memmoveとmemmoveは同じ結果を返しました。\n");
    } else {
        printf("ft_memmoveとmemmoveは異なる結果を返しました。\n");
    }

    return 0;
}
