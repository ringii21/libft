/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:39:21 by abonard           #+#    #+#             */
/*   Updated: 2021/11/30 14:44:32 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	pos;
	unsigned char	*cs1;
	unsigned char	*cs2;
	int	res;

	pos = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (pos < n)
	{
		res = cs1 -cs2;
		++pos;
	}
	if (res)
		return (res);
	return (0);
}
