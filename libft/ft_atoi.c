#include "libft.h"

int	ft_atoi(const char *str)
{
	long	nb;
	char	*s;
	int	sign;

	nb = 0;
	s = (char *)str;
	while (ft_isspace(*s))
		s++;
	sign = (*s == '-') ? -1 : 1;
	if (*s == '+' || *s == '-')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		nb = nb * 10 + *s - '0';
		s++;
	}
	nb *= sign;
	return (nb);
}
