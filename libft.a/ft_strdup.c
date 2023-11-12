/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:19:02 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/12 13:33:08 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dst;

	size = ft_strlen(s);
	dst = (char *)mallc(size * sizeof(char) + 1);
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, s, size);
	dst[size] = '\0'
}
