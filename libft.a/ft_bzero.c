#include <libft.h>

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    char str;

    i = 0;
    *str = s;

    while(i<n)
    {
        str[i] = '/0';
        i++;
    }
    return(s)
}