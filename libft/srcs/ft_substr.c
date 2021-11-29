/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:15:28 by abonard           #+#    #+#             */
/*   Updated: 2021/11/29 17:12:20 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (i < start)
		i++;
	dest = malloc(sizeof(char *) * (len + 1));
	if (dest == NULL)
		return (NULL);
	start = 0;
	while (len > start)
	{
		dest[x++] = s[i++];
		len--;
	}
	dest[x] = s[i];
	dest[x + 1] = '\0';
	return (dest);
}
