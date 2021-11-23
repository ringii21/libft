/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:42:36 by abonard           #+#    #+#             */
/*   Updated: 2021/10/12 15:44:04 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    int     i;
    char    *csrc = (char *)src;
    char    *cdest = (char *)dest;

    i = 0;
    while (i < n) 
    {
        cdest[i] = csrc[i];
            if (csrc[i] == c)
            {
                cdest[i] = csrc[i];
                i++;
                break;
            }
        i++;
    }
    cdest[i] = '\0';
}