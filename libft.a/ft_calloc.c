/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:03:56 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/12 13:14:22 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = (void *)malloc(nmemb * size);
	ft_bzero(array, (nmemb * size));
	return (array);
}
