#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    char    *tab;
    if (nmemb == 0 || size == 0)
        return (0);
    tab = malloc(size * nmemb);
    if (!tab)
        return (NULL);
    ft_bzero(tab, nmemb * size);
    return (tab);
}