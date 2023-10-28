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

