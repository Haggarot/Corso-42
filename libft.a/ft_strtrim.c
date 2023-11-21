/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:17:18 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/21 22:28:29 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (ft_check_set(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (ft_check_set(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	trim = (char *)malloc(size * sizeof(char) + 1);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, (char *)s1, size + 1);
	return (trim);
}
