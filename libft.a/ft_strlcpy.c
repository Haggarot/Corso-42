/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:46:07 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/12 10:56:06 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;

	if(size > 0)
	{
		while(src[i]!= '/n')
		{
			dest[i]=src[i];
			i++;
		}
		dest[i] = '/n';
	}
	return(ft_strlen(src));
}