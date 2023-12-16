/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:03:56 by nbianchi          #+#    #+#             */
/*   Updated: 2023/12/16 19:52:02 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	size_t	total_size;

	total_size = nmemb * size;
	if (nmemb != 0 && size != 0 && total_size / nmemb != size)
		return (NULL);
	array = malloc(total_size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, total_size);
	return (array);
}
