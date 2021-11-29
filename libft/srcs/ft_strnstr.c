/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:17:15 by abonard           #+#    #+#             */
/*   Updated: 2021/11/29 17:07:24 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (i < len)
	{
		if (s1[i] != s2[i])
			return (NULL);
		i++;
	}
	return ((char *)s2);
}
