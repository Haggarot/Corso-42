#IFNDEF libft
#DEFINE libft

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void    ft_putnchar(char c, int n);
int     ft_isalnum(int n);
int     ft_isalpha(int n);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_strlen(const char *str);
void	ft_putnchar(char c, int n);
void    *ft_memset(void *s, int c, size_t n);



#endif