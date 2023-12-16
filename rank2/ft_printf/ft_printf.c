/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:07:01 by nbianchi          #+#    #+#             */
/*   Updated: 2023/12/16 16:27:28 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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

int	main(void)
{
	int	count;
	int	var;
	int	*ptr;

	var = 42;
	ptr = &var;
	count = ft_printf("Ciao %s la tua ft_printf funziona bene\n", "Nicco");
	ft_printf("i char scritti sono %d\n", count);
	count = ft_printf("%u\n", 1165535);
	ft_printf("i char scritti sono %d\n", count);
	count = printf("%u\n", 1165535);
	printf("i char scritti sono %d\n", count);
	count = ft_printf("L'indirizzo richiesto è: %p\n", (void *)ptr);
	ft_printf("i char scritti sono %d\n", count);
	count = printf("L'indirizzo richiesto è: %p\n", (void *)ptr);
	ft_printf("i char scritti sono %d\n", count);

	return (count);
}
