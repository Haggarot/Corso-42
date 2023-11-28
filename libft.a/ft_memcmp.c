/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:52:51 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/28 10:26:32 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	ss1;
	const unsigned char	ss2;

	if (n == 0)
		return (0);
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while ((ss1 == ss2) && n - 1 > 0)
	{
		ss1++;
		ss2++;
		n--;
	}
	return ((int)(ss1 - ss2));
}
