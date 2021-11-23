/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:42:36 by abonard           #+#    #+#             */
/*   Updated: 2021/10/12 15:44:04 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_check(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	return (0);
}

int	count_word (char *str)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while(str[i])
	{
		if (ft_check(str[i]) == 0 && ft_check(str[i + 1]) == 1)
			word++;
		i++;
	}
	return(word);
}

void	ft_copy(char *dest, char *src)
{
	int i;

	i = 0;
	while (ft_check(src[i]) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

#include <stdio.h>
void	ft_transfert(char **tab, char *str)
{
	int i;
	int j;
	int word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if(ft_check(str[i]) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_check(str[i + j]) == 0)
				j++;
			tab[word] = malloc(sizeof(char) * j + 1);
			ft_copy(tab[word], str + i);
			i = i + j;
			word++;
		}
	}
}

char **ft_split(char *str)
{
	char **tab;
	int word;

	word = count_word(str);
	if((tab = malloc(sizeof(char *) * (word + 1))) == NULL)
		return (NULL);
	tab[word] = 0;
	ft_transfert(tab, str);
	return (tab);
}