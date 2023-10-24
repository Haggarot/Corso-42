#include <unistd.h>
#include "libft.h"

void	ft_putnchar(char c, int n)
{
	write(n, &c, 1);
}