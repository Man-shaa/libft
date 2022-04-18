#include "libft.h"

size_t  ft_strlcpy(char * dest, const char * src, size_t size)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (src[j])
        j++;
    if (size == 0)
        return (j);
    while (src[i] && i < (int)size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (j);
}