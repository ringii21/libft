/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:12:07 by abonard           #+#    #+#             */
/*   Updated: 2021/10/24 18:48:44 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int ft_check(char c, char *str)
{
	int i;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}*/

int ft_count(char const  *str, char const *set)
{
	int i;
	int count;

	count = 0;
	i = 0;

	while (str[i])
	{
		if (ft_strchr(set, str[i]) == 0)
			count++;
		i++;
	}
	return (count);
}

void	ft_copy(char *dest, char const *src, char const *set)
{
	int i;

	i = 0;
	while (ft_strchr(set, src[i]) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int len;
	int i;
	int j;
	int x;

	i = 0;
	len = ft_count(s1, set);
	str= malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) != 0)
			i++;
		else
		{
			j = 0;
			while (ft_strchr(set, s1[i + j]) == 0)
				j++;
			ft_copy(str, s1 + i, set);
			i = i + j;
		}
	}
	return((char *)str);
}

#include <stdio.h>
int main (void)
{
	char *str = "lalaland";
	ft_strtrim("lalaland", "an");

	printf("%s", str);

	return (0);
}
