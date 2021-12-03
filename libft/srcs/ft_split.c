/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:42:36 by abonard           #+#    #+#             */
/*   Updated: 2021/12/03 19:00:13 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_check(char str, char c)
{
	if (c == str || c == str || c == str || c == str)
		return (1);
	return (0);
}

int	count_word(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (ft_check(str[i], c) == 0 && ft_check(str[i + 1], c) == 1)
			word++;
		i++;
	}
	return (word);
}

void	ft_copy(char *dest, const char *src, char c)
{
	int	i;

	i = 0;
	while (ft_check(src[i], c) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_transfert(char **tab, const char *str, char c)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (ft_check(str[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_check(str[i + j], c) == 0)
				j++;
			tab[word] = malloc(sizeof(char) * j + 1);
			if (tab[word] == NULL)
				return ;
			ft_copy(tab[word], str + i, c);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(const char *str, char c)
{
	char	**tab;
	int		word;

	word = count_word(str, c);
	tab = malloc(sizeof(char *) * (word + 1));
	if (tab == NULL || str == NULL)
		return (NULL);
	tab[word] = 0;
	ft_transfert(tab, str, c);
	return (tab);
}
