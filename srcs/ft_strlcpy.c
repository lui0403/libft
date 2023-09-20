/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojiebina <kojiebina@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 05:05:22 by luebina           #+#    #+#             */
/*   Updated: 2023/09/21 06:22:50 by kojiebina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	// テスト用のデータ
// 	char *src = NULL;
// 	char *dest1 = NULL;
// 	char dest2[20];

// 	// 自作の ft_strlcpy を使用してコピー
// 	// ft_strlcpy(dest1, src, 10);

// 	// 標準ライブラリの strlcpy を使用してコピー
// 	strlcpy(dest1, src, 10);

// 	// コピー結果を比較
// 	// if (strcmp(dest1, dest2) == 0)
// 	// {
// 	// 	printf("ft_strlcpy と strlcpy で同じ結果が得られました。\n");
// 	// }
// 	// else
// 	// {
// 	// 	printf("ft_strlcpy と strlcpy で異なる結果が得られました。\n");
// 	// }
// 	printf("%s, %s\n", dest1, dest2);

// 	return 0;
// }