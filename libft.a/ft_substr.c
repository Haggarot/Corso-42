/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:41:56 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/13 17:00:17 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc(len * sizeof(char) + 1);
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		ft_strlcpy(substr, s + start, len + 1)
		/*
		substr[i] = s[start];
		i++;
		start++;
		*/
	}
		substr[i] = '\0';
		return (substr);
	}
