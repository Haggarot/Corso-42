/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:52:14 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/13 18:07:06 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char*)s)[i] == (unsigned char*)c)
            return (((unsigned char*)s) + i);
        else
            i++;
    }
    return (NULL);
    }
