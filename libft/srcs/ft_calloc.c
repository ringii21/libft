/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:24:12 by abonard           #+#    #+#             */
/*   Updated: 2021/11/29 15:56:42 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}
