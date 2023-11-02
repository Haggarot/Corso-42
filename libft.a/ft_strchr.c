#include "libft.h"

char *strchr(const char *s, int c)
{
	int	i;

	i = 0;

	while(s[i])
	{
		if(s[i] == (char)c)
			return((char *)(s + i));
		else
			i++;
	}
	return(0);
}