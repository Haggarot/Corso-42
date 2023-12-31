/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:02:02 by nbianchi          #+#    #+#             */
/*   Updated: 2023/12/16 16:17:20 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_printdigit(long digit, int base);
int	ft_printupdigit(long digit, int base);
int	ft_readformat(char format, va_list ap);
int	ft_printunsign(unsigned int num);
int	ft_printpointer(unsigned long ptr);

#endif
