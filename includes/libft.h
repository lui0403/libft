/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojiebina <kojiebina@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 01:49:01 by luebina           #+#    #+#             */
/*   Updated: 2023/09/21 06:32:21 by kojiebina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *str);


#endif