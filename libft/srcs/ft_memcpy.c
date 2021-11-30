/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:02:42 by abonard           #+#    #+#             */
/*   Updated: 2021/11/30 14:09:10 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
void	ft_memcpy(void *dest, void *src, size_t n)
{
	size_t		i;
	char	*cdest;

	i = 0;
	cdest = (char *)dest;
	while (i < n)
	{
		*(char *)cdest = *(char *)src;
		cdest++;
		src++;
		i++;
	}
}
