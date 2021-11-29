/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:18:50 by abonard           #+#    #+#             */
/*   Updated: 2021/11/29 15:57:42 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int val)
{
	while ((val >= 'a' && val <= 'z') || (val >= 'A' && val >= 'Z'))
		return (1);
	return (0);
}
