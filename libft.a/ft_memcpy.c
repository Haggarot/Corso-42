/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:45:37 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/13 17:03:05 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;

    i = 0;

    if (!dest && !src)
        return (null);
    while(dest != src)
    {
        (unsigned char) tmp[i] = (unsigned char)src[i];
    }
    return (tmp);
}
