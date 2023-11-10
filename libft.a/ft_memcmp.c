#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char ss1;
    unsigned char ss2;

    if(n == 0)
        return(0);
    ss1 = (unsigned char *)s1;
    ss2 = (unsigned char *)s2;
    while ((ss1 == ss2) && n - 1 > 0)
	{
		ss1++;
		ss2++;
		n--;
	}
	return ((int)(ss1 - ss2));
}