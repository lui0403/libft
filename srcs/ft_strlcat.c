/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojiebina <kojiebina@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 05:18:58 by luebina           #+#    #+#             */
/*   Updated: 2023/09/21 06:30:08 by kojiebina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, int dstsize)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && j < (dstsize - i - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = 0;
	while (src[j])
		j++;
	return (i + j);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	// テスト用のデータ
// 	char src[0xF] = "nyan !";
// 	char *dest1 = NULL;
// 	char *dest2 = NULL;

// 	// 自作の ft_strlcat を使用してコピー
// 	ft_strlcat(dest1, src, 0);

// 	// 標準ライブラリの strlcat を使用してコピー
// 	// strlcat(dest2, src, 0);

// 	// コピー結果を比較
// 	// if (strcmp(dest1, dest2) == 0)
// 	// {
// 	// 	printf("ft_strlcat と strlcat で同じ結果が得られました。\n");
// 	// }
// 	// else
// 	// {
// 	// 	printf("ft_strlcat と strlcat で異なる結果が得られました。\n");
// 	// }
// 	printf("%s, %s\n", dest1, dest2);

// 	return 0;
// }