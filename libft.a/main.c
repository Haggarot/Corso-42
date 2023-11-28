/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:46:38 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/28 09:06:22 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_split
*/
#include "libft.h"

int	main(void)
{
	char	*str;
	char	**splitted;
	char	*word;

	str = "Hello,world,this,is,a,test";
	splitted = ft_split(str, ',');
	if (splitted)
	{
		for (int i = 0; splitted[i] != NULL; i++)
		{
			word = splitted[i];
			while (*word)
			{
				write(1, word, 1);
				word++;
			}
			write(1, "\n", 1);
		}
		ft_free_split_memory(splitted);
	}
	return (0);
}

/*
ft_itoa
*/
/*
int main() {
    int num = -12345;
    char *result = ft_itoa(num);

    if (result) {
        int i = 0;
        while (result[i] != '\0') {
            write(1, &result[i], 1);
            i++;
        }
        write(1, "\n", 1);
        free(result); // Free memory allocated by ft_itoa
    }

    return 0;
}
*/