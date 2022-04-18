#include "libft.h"

int ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (c == str[i])
            return ((int)str[i]);
        i++;
    }
    if (c == '\0')
		return ((int)str[i]);
    return (0);
}