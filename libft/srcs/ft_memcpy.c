/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:02:42 by abonard           #+#    #+#             */
/*   Updated: 2021/12/01 13:57:28 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t		i;
	unsigned char	*csrc;
	unsigned char	*cdest;

	i = 0;
	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		*(unsigned char *)cdest = *(unsigned char *)src;
		cdest++;
		src++;
		i++;
	}
	return (dest);
}
