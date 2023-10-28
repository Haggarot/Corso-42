#include <libft.h>

void memcpy(void *dest, const void *src, size_t n)
{
    int i;
    char tmp[];

    i = 0;

    if (!dest && !src)
        return (null);

    while(dest != src)
        {
            (unsigned char) tmp[i] = (unsigned char)src[i];
            
        }
}