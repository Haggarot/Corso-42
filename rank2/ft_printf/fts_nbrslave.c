/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_nbrslave.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:02:56 by nbianchi          #+#    #+#             */
/*   Updated: 2023/12/16 16:18:13 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdigit(long digit, int base)
{
	int		count;
	char	*simboli;

	simboli = "0123456789abcdef";
	if (digit < 0)
	{
		write(1, "-", 1);
		return (ft_printdigit(-digit, base) + 1);
	}
	else if (digit < base)
		return (ft_printchar(simboli[digit]));
	else
	{
		count = ft_printdigit(digit / base, base);
		return (count + ft_printdigit(digit % base, base));
	}
}

int	ft_printupdigit(long digit, int base)
{
	int		count;
	char	*simboli;

	simboli = "0123456789ABCDEF";
	if (digit < 0)
	{
		write(1, "-", 1);
		return (ft_printupdigit(-digit, base) + 1);
	}
	else if (digit < base)
		return (ft_printchar(simboli[digit]));
	else
	{
		count = ft_printupdigit(digit / base, base);
		return (count + ft_printupdigit(digit % base, base));
	}
}

int	ft_printunsign(unsigned int num)
{
	if (num < 10)
		return (ft_printchar(num + '0'));
	else
		return (ft_printunsign(num / 10) + ft_printchar((num % 10) + '0'));
}

int	ft_printpointer(unsigned long ptr)
{
	if (ptr == 0)
		return (ft_printstr("0x0"));

	ft_printstr("0x");
	return (2 + ft_printdigit(ptr, 16));
}
