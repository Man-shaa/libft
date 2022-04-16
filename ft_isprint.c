#include "libft.h"

int ft_isprint(int a)
{
    if (a >= 32 && a < 127)
        return (1);
    return (0);
}