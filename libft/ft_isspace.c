#include "libft.h"

int	ft_isspace(int c)
{
	unsigned char	s;

	s = (unsigned char)c;
	if (s == '\t' || s == '\n' || s == '\v' || s == '\f'
		|| s == '\r' || s == ' ')
		return (1);
	return (0);
}
