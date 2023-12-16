/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:47:25 by nbianchi          #+#    #+#             */
/*   Updated: 2023/12/16 19:31:28 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	handle_sign(const char **str)
{
	int	is_negative;

	is_negative = 0;
	if (**str == '+' || **str == '-')
	{
		if (**str == '-')
			is_negative = 1;
		(*str)++;
		if (**str == '+' || **str == '-')
			return (0);
	}
	if (is_negative)
		return (-1);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	nbr;

	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	sign = handle_sign(&str);
	if (sign == 0)
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (sign * nbr);
}
