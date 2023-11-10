#include "libft.h"

char *strrchr(const char *s, int c)
{
    int	i;

	i = 0;
	while(s[i])
		i++;
    while(i >= 0)
	{
		if(s[i] == (char)c)
			return((char *)(s + i));
		else
			i--;
	}
	return(0);
}