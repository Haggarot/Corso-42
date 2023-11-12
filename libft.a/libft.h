/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:46:20 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/12 10:59:48 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/*CHECK*/
int     ft_isalnum(int n);
int     ft_isalpha(int n);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);

/*COUNT*/
int     ft_strlen(const char *str);

/*PRINT*/
void	ft_putnchar(char c, int n);

/*MEMORY*/
void    ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    memcpy(void *dest, const void *src, size_t n);
int 	memcmp(const void *s1, const void *s2, size_t n);
void 	*memchr(const void *s, int c, size_t n);

/*STRING*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int 	strncmp(const char *s1, const char *s2, size_t n);
char 	*strrchr(const char *s, int c);


/*CHAR*/
int	ft_toupper(int c);
int	ft_tolower(int c);
#endif