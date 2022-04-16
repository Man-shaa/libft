#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dst[i])
        i++;
    while (src[j] && i + j + 1 < size)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    printf("%s", dst);
    j = 0;
    while (src[j])
        j++;
    if (size <= i)
        return (size + j);
    return (i + j);
}