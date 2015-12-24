#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*aux;

	ft_memcpy(aux, src, len);
	ft_memcpy(dst, aux, len);
	return (dst);
}
