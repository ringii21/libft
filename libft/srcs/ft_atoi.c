/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:33:48 by abonard           #+#    #+#             */
/*   Updated: 2021/12/01 14:49:49 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		n;
	//int		of;
	long	res;

	res = 0;
	i = 0;
	n = 1;

	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\r' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			n = n * -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * n);
}

#include <stdio.h>
//#include <libc.h>
int main (int ac, char **av)
{
	(void)ac;
	const char *s = "-2147483650";
	const char *p = "-2147483655";
	printf("vrai:\t%i\n", atoi(av[1]));
	printf("moi:\t%i\n", ft_atoi(av[1]));
	return (0);

	//overflow a partir de long int because it is what is isssssss
}
