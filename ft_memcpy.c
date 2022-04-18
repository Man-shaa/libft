#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char        *dest1;
    const char  *src1;

    dest1 = dest;
    src1 = src;
    while (n > 0)
    {
        *dest1 = *src1;
        dest1++;
        src1++;
        n--;
    }
    return (dest);
}