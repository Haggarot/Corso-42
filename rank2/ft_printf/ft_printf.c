/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:07:01 by nbianchi          #+#    #+#             */
/*   Updated: 2023/12/18 18:04:33 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	ft_readformat(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == 'c')
		count = ft_printchar(va_arg(ap, int));
	else if (format == 's')
		count += ft_printstr(va_arg(ap, char *));
	else if (format == 'd' || format == 'i')
		count += ft_printdigit((long)(va_arg(ap, int)), 10);
	else if (format == 'x')
		count += ft_printdigit((long)(va_arg(ap, unsigned int)), 16);
	else if (format == 'p')
		count += ft_printpointer((long)(va_arg(ap, long)));
	else if (format == 'X')
		count += ft_printupdigit((long)(va_arg(ap, long)), 16);
	else if (format == '%')
		count += write(1, "%", 1);
	else if (format == 'u')
		count += ft_printunsign((long)(va_arg(ap, long)));
	else
		count += write(1, &format, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		charcounter;

	va_start(ap, format);
	charcounter = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			charcounter += ft_readformat(*++format, ap);
		else
			charcounter += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (charcounter);
}
