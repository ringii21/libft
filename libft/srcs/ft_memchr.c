/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:06:11 by abonard           #+#    #+#             */
/*   Updated: 2021/11/30 14:38:02 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n)
	{
		if (str[i] == c)
			return (str);
		n--;
	}
	return (NULL);
}
