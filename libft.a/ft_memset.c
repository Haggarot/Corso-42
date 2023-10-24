#include <libft.h>

void    *ft_memset(void *s, int c, size_t n)
{
/*
ft_memset()  function  fills  the  first  n  bytes of the memory area
pointed to by s with the constant byte c.
*/
size_t  i;
char    *str;

i = 0;
str = s;

while(i < n)
{
    str[i] = c;
    i++;
}
return (s)
}