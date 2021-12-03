/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:42:36 by abonard           #+#    #+#             */
/*   Updated: 2021/12/03 16:27:30 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*csrc;
	unsigned char	*cdest;


	i = 0;
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		cdest[i] = csrc[i];
		if (csrc[i] == (unsigned char) c)
		{
			return (dest + i + 1);
		}
		i++;
	}
	return (NULL);
}
