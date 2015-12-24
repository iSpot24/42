#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < (int)n)
		i++;
	if (i == (int)n)
		return ((unsigned char)s1[i - 1] - (unsigned char )s2[i - 1]);
	else
		return ((unsigned char)s1[i] - (unsigned char )s2[i]);
}
