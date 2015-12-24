#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
