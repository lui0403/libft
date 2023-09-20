/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojiebina <kojiebina@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 06:07:28 by luebina           #+#    #+#             */
/*   Updated: 2023/09/21 06:08:43 by kojiebina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		j;

	str = (char *)s;
	i = 0;
	j = -1;
	while (str[i])
	{
		if (str[i] == c)
			j = i;
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	if (j != -1)
		return (&str[j]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     // テスト用の文字列
//     const char *str = "abbbbbbbb!";
//     int target_char = 'a';

//     // 自作の ft_strrchr を使用して検索
//     char *result1 = ft_strrchr(str, target_char);

//     // 標準ライブラリの strrchr を使用して検索
//     char *result2 = strrchr(str, target_char);

//     // 結果を比較
//     if ((result1 == NULL && result2 == NULL) || (result1 && result2 && *result1 == *result2))
//     {
//         printf("ft_strrchr と strrchr で同じ結果が得られました。\n");
//     }
//     else
//     {
//         printf("ft_strrchr と strrchr で異なる結果が得られました。\n");
//     }
// 	printf("%s, %s", result1, result2);

//     return 0;
// }