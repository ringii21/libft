/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:12:07 by abonard           #+#    #+#             */
/*   Updated: 2021/11/30 15:46:40 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_chick(char c, const char *charset)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		len;
	int		end;

	i = 0;
	end = ft_strlen(s1);
	while (ft_chick(s1[i], set) == 1)
	{
		if (ft_chick(s1[i], set) == 0)
		{
			len = ft_strlen(s1 - 1) - i;
			str = ft_substr(s1, i, len);
		}
		i++;
	}
	while (ft_chick(s1[end], set) == 1)
	{
		if (ft_chick(s1[end], set) == 0)
		{
			len = ft_strlen(str - 1) - (end - i);
			str = ft_substr(str, 0, (end - i));
		}
	}
	return (str);
}
