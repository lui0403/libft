/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 05:18:58 by luebina           #+#    #+#             */
/*   Updated: 2023/09/27 08:18:37 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// # include <limits.h>
// # include <stdlib.h>
// # include <string.h>
// # include <ctype.h>
// # include <fcntl.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size <= 0)
		return (ft_strlen(src));
	if (size < ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (dest[i] && i < size)
		i++;
	while (src[j] && j < (size - i - 1) && size - i != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = 0;
	while (src[j])
		j++;
	return (i + j);
}

// int	main(void)
// {
// 	char *dst1 = calloc(100, sizeof(char));
// 	char *dst2 = calloc(100, sizeof(char));
// 	ft_strlcat(dst1, "", 100);
// 	strlcat(dst2, "", 100);
// 	ft_strlcat(dst1, "hello", 100);
// 	strlcat(dst2, "hello", 100);
// 	ft_strlcat(dst1, "world", 100);
// 	strlcat(dst2, "world", 100);
// 	// printf("8: %s, %s\n", dst1, dst2);
// 	char *src1 = calloc(100, sizeof(char));
// 	char *src2 = calloc(100, sizeof(char));
// 	for (int i = 0; i < 99; i++)
// 	{
// 		src1[i] = i + 1;
// 		src2[i] = i + 1;
// 	}
// 	ft_strlcat(dst1, src1, 0);
// 	strlcat(dst2, src2, 0);
// 	// printf("9: %s, %s\n", dst1, dst2);
// 	ft_strlcat(dst1, src1, 10);
// 	strlcat(dst2, src2, 10);
// 	ft_strlcat(dst1, src1, 50);
// 	strlcat(dst2, src2, 50);
// 	ft_strlcat(dst1, src1, 100);
// 	strlcat(dst2, src2, 100);
// 	ft_strlcat(dst1, src1, 10);
// 	strlcat(dst2, src2, 10);
// 	ft_strlcat(dst1, src1, 100);
// 	strlcat(dst2, src2, 100);
// 	ft_strlcat(NULL, src1, 0);
// 	strlcat(NULL, src2, 0);
// 	printf("result: %s, %s\n", dst1, dst2);
// }