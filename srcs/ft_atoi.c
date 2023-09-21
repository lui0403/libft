/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 07:07:45 by luebina           #+#    #+#             */
/*   Updated: 2023/09/22 06:31:59 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v' || \
			nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
		neg = -1;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
		i++;
	while ((nptr[i] >= 48) && (nptr[i] <= 57))
	{
		nb = nb * 10 + (nptr[i] - 48);
		i++;
	}
	return (nb * neg);
}
