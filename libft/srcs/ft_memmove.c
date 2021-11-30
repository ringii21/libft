/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:05:48 by abonard           #+#    #+#             */
/*   Updated: 2021/11/30 14:27:04 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*csrc;
	char		*cdest;

	i = 0;
	csrc = (char *)src;
	cdest = (char *)dest;
	if (cdest > csrc)
	{
		while (n-- > 0)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (dest);
}
