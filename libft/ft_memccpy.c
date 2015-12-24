#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*str1;
	char		*str2;

	i = 0;
	str1 = (char *)dst;
	str2 = (char *)src;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str2[i] == (char)c)
			return (str1 + i + 1);
		i++;
	}
	return (NULL);
}
