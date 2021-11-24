/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:15:28 by abonard           #+#    #+#             */
/*   Updated: 2021/11/24 19:13:52 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	//wawaweewa = 9 len string
	//start = 4
	//len = 2
	//output: wee (resultat souhaiter)
	unsigned int		slen;
	char	*dest;
	unsigned int i;
	unsigned int x;

	slen = ft_strlen(s);
	i = 0;
	x = 0;
	while (i < start)
		i++;
	dest = malloc(sizeof(char *)* (len + 1));
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

int main(void)
{
	char const *str = "c'est la souffrance de mon trou du cul";
	char *dest;

	dest = ft_substr(str, 6 , 12);
	printf("%s", dest);

	return (0);
}
