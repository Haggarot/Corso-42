#ifndef libft_h
#define libft_h

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/*CHECK*/
int     ft_isalnum(int n);
int     ft_isalpha(int n);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);

/*COUNT*/
int     ft_strlen(const char *str);

/*PRINT*/
void	ft_putnchar(char c, int n);

/*MEMORY*/
void    ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);

#endif