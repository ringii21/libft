/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:12:07 by abonard           #+#    #+#             */
/*   Updated: 2021/11/26 15:21:08 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_check(char c, const char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	unsigned int		slen;
	char	*dest;
	unsigned int i;
	unsigned int x;

	slen = strlen(s);
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
char *ft_strtrim(char const *s1, char const *set)
{
	int	start; // debut de mon string
	int	i; // compteur
	int	len; // longueur pour malloc
	int	end;
	int	j;
	char str[10] = "";
	char *ptr = (char *)s1;
	int test;

	i = 0;
	start = 0;
	end = strlen(s1) - 1;// fin de mon string
	test = strlen(set);
	
	while (i < end)
	{
		if (ft_check(s1[i], set) == 1)
		{
			s1 = ft_substr(s1, i, end - 1);
		}
		i++;
		end--;
	}
	//printf("%i", end);
//	printf("%i", test);
	//s1 = ft_substr(s1, test, end - test);
	printf("%s", s1);
}

int main(void)
{
	const char *wawawweewa = "Screw thatScrew ";
	const char *oops = "Screw ";

	ft_strtrim(wawawweewa, oops);

	return (0);
}

