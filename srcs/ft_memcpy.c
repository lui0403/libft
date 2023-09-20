/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojiebina <kojiebina@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 02:38:18 by luebina           #+#    #+#             */
/*   Updated: 2023/09/21 05:41:14 by kojiebina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr;
	char	*ptr2;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (dst);
	ptr = (char *)dst;
	ptr2 = (char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dst);
}

// int main()
// {
//     // テスト用のデータ
//     char *src = NULL;
//     char *dest1 = "Hello World!";
//     char *dest2 = "Hello World!";

//     // 自作の ft_memcpy を使用してコピー
//     // ft_memcpy(dest1, src, 3);

//     // 標準ライブラリの memcpy を使用してコピー
//     memcpy(dest2, src, 3);

//     // コピー結果を比較
//     // if (strcmp(dest1, dest2) == 0)
//     // {
//     //     printf("ft_memcpy と memcpy で同じ結果が得られました。\n");
//     // }
//     // else
//     // {
//     //     printf("ft_memcpy と memcpy で異なる結果が得られました。\n");
//     // }
// 	printf("%s, %s", dest1, dest2);

//     return 0;
// }