#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i;
	unsigned int	start;
	unsigned int	end;

	i = 0;
	end = 0;
	while (s[i] && (s[i] == '\n' || s[i] == '\t' || s[i] == ' '))
		i++;
	start = i;
	while (s[i] != '\0')
	{
		if (s[i] >= '!' && s[i] <= '~')
			end = i;
		i++;
	}
	return (ft_strsub(s, start, (size_t)(end - start + 1)));
}
