/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:47:25 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/12 13:05:31 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	short	odd;
	int		nbr;

	odd = 0;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		++str;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			odd++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		nbr *= 10;
		nbr += *str - 48;
		++str;
	}
	if (!(odd % 2))
		return (nbr);
	return (-nbr);
}
