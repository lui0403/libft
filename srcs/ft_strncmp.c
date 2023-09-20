/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojiebina <kojiebina@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:26:56 by luebina           #+#    #+#             */
/*   Updated: 2023/09/21 06:15:18 by kojiebina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 0;
	while (i < n && res == 0 && (s1[i] || s2[i]))
	{
		res = ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (res);
}

#include <stdio.h>
#include <string.h>

int main()
{
	// テスト用の文字列
	const char *str1 = "atoms\0\0\0\0";
	const char *str2 = "atoms\0abc";
	unsigned int n = 8;

	// 自作の ft_strncmp を使用して比較
	int result1 = ft_strncmp(str1, str2, n);

	// 標準ライブラリの strncmp を使用して比較
	int result2 = strncmp(str1, str2, n);

	// 結果を比較
	if ((result1 == 0 && result2 == 0) || (result1 > 0 && result2 > 0) || (result1 < 0 && result2 < 0))
	{
		printf("ft_strncmp と strncmp で同じ結果が得られました。\n");
	}
	else
	{
		printf("ft_strncmp と strncmp で異なる結果が得られました。\n");
	}
	printf("%d, %d\n", result1, result2);
}