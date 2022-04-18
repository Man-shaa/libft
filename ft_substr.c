#include "libft.h"
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned start, size_t len)
{
    int     i;
    char    *str;

    i = 0;
    str = malloc(sizeof(char) * len + 1);
    if (!str)
        return (NULL);
    while (s[start] && i < (int)len)
    {
        str[i] = s[start];
        i++;
        start++;
    }
    str[i] = '\0';
    return (str);
}

#include <stdio.h>
int main(void)
{
    char    s[] = "Hello comment ca va ?";
    printf("%s", ft_substr(s, 0, 15));
    return (0);
}