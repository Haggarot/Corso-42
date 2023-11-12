/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:46:38 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/12 10:56:06 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
prova BZERO
*/
#include "libft.h"


int main()
{
   char *s;

   s = "Hai fallito il compito";

   ft_bzero(s, ft_strlen(s));
   ft_putnchar(s, ft_strlen(s));
   return(0);
}

