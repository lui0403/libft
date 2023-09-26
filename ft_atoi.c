/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 07:07:45 by luebina           #+#    #+#             */
/*   Updated: 2023/09/26 23:40:38 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_overflow(long nb, int neg)
{
	if (nb > LONG_MAX)
	{
		if (neg == -1)
			return ((int)(LONG_MIN));
		return ((int)LONG_MAX);
	}
	return ((int)(nb * neg));
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		neg;
	long	nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v' || \
			nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
		i++;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while ((nptr[i] >= 48) && (nptr[i] <= 57))
	{
		nb = nb * 10 + (nptr[i] - 48);
		i++;
	}
	return (is_overflow(nb, neg));
}
