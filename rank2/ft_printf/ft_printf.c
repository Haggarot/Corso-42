/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:07:01 by nbianchi          #+#    #+#             */
/*   Updated: 2023/12/16 12:54:49 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_printstr(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		ft_printchar((int)*str);
		++count;
		++str;
	}
	return (count);
}

int	ft_printdigit(long digit, int base)
{
	int		count;
	char	*simboli;

	simboli = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_printdigit(-n, base) + 1);
	}
	else if (n < base)
		return (ft_printchar[n]);
	else if (n > base)
	{
		count = ft_printdigit(n / base, base);
		return (count + ft_printdigit(n % base), base);
	}
}


int	ft_readformat(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == 'c')
		count = ft_printchar(va_arg(ap, int));
	else if (format == 's')
		count += ft_printstr(va_arg(ap, char *));
	else if (format == 'd')
		count += ft_printdigit((long)(va_arg(ap, int)), 10);
	else if (format == 'x')
		count += ft_printdigit((long)(va_arg(ap, unsigned int)), 16);
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

	count = ft_printf("Ciao %s la tua ft_printf funziona bene\n", "Nicco");
	ft_printf("sono stati scritti %d char", count);
	return ;
}
