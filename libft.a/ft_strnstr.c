/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:09:35 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/12 11:43:05 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *lookfor, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str && !len)
		return (0);
	if (lookfor[0] == '\0' || lookfor == str)
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == lookfor[j] && (i + j) < len)
		{
			if (str[i + j] == '\0' && lookfor[j] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		if (lookfor[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
