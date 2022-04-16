#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    const char    *str;

    str = s;
    while (n > 0)
    {
        if (*str = (unsigned char)c)
            return (str);
        str++;
    }
    return (0);    
}