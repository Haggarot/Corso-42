/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:45:52 by nbianchi          #+#    #+#             */
/*   Updated: 2023/11/12 10:56:06 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	ss;
	size_t	dd;
/*imposto il fato sulla lunghezza delal stringa src, che dovro ritornare
e che deve rimanere invariato durante l-uso delle funzioni*/
	ss = ft_strlen(src);

/*se non esiste una stringa di destinazione e i byte forniti dall-utente
per la concatenazione sono 0 allora ritorno la lunghezza della src
poiche non ce niente da concatenare*/
	if(!dst && size == 0)
		return(ss);

/*in caso contrario imposto il dato che dovro usare nlle funzioni
con la lunghezza della stringga dst, e anche la variabile che rappresenta
la lunghezza della string dst originale, prima della copia.*/
	d = ft_strlen(dst);
	dd = d;

/*se la lunghezza fornita dall'utente e inferiore alla lunghezza della
stringa di destinazione significa che non ho spazio per copiare e che
la lunghezza della concatenazione sara la lunghezza della stringa SRC e 
la SIZE fornita dall'utente*/
	if(size <= dd)
		return (size + ss);

/* se tutto va bene imposto la variabile S a 0 e la utilizzero per contare
i char di src per poterli addizionare a DST, D avra al momento il valore 
della lunghezza della stringa dst poiche la concatenazione inizia da dst*/
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
/* dubbio, e veramente importante creare una variabile con la lunghezza
delle stringe originali? non sarebbe sufficiente riportare la 
variabile d che rappresenta la lunghezza finale della concatenazione
incluso il byte di fine stringa? cosi dice il man... mah(n)*/
	dst[d] = 0;

/*ritorno la somma delle lugnhezze di entrambe le stringe originali
come indicato in man*/
	return (dd + ss);
}