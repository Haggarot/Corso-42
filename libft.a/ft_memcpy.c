/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:45:37 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/28 10:32:47 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;

	if (!dest || !src)
		return (NULL);

	tmp_dest = (unsigned char *)dest;
	tmp_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
