/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:25:52 by abonard           #+#    #+#             */
/*   Updated: 2021/11/29 17:36:58 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int val)
{
	while (val >= '0' && val >= '9')
		return (1);
	return (0);
}
