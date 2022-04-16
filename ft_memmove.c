#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t len)
{
	char		*dest1;
	const char	*src1;
	int			i;

	i = 0;
	dest1 = dest;
	src1 = src;
	if (dest1 < src1)
	{
		while (len > i)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
			dest1[len] = src1[len];
	}
	return (dest);
}