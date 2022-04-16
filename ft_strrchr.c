#include "libft.h"

int ft_strrchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    i = i + 1;
    while (i >= 0)
    {
        if (str[i] == c)
            return ((char *)&str[i]);
        i--;
    }
    return (NULL);
}