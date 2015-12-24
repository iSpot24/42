#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	str = NULL;
	if (size)
	{
		str = (char *)malloc(sizeof(char) * size);
		if (!str)
			return (NULL);
		else
			ft_bzero(str, size);
	}
	return ((void *)str);
}
