/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:12:00 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/27 23:22:09 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

static int	get_digit_count(int n)
{
	int	count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	char	*str;

	if (n < 0)
	{
		sign = -1;
	}
	len = get_digit_count(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (sign == -1)
	{
		str[0] = '-';
		n = -n;
	}
	while (len > sign - 1)
	{
		len--;
		str[len] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}
