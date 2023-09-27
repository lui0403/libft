/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 03:37:24 by luebina           #+#    #+#             */
/*   Updated: 2023/09/27 07:56:55 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*int_to_char(char *ptr, int n, int len)
{
	if (n == -2147483648)
	{
		ptr[1] = '2';
		n = 147483648;
	}
	if (n < 0)
		n *= -1;
	while (n / 10 != 0)
	{
		ptr[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	ptr[len] = n % 10 + '0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		len;
	int		num;

	i = 0;
	len = 0;
	num = n;
	if (num < 0)
		len++;
	while (num / 10 != 0)
	{
		num /= 10;
		len++;
	}
	ptr = (char *)malloc(sizeof(char) * len + 2);
	if (ptr == NULL)
		return (NULL);
	ptr = int_to_char(ptr, n, len);
	if (n < 0)
		ptr[0] = '-';
	ptr[len + 1] = '\0';
	return (ptr);
}
