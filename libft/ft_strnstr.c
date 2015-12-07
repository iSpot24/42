/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egligor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 20:41:51 by egligor           #+#    #+#             */
/*   Updated: 2015/11/10 20:58:08 by egligor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*d;
	int		i;

	d = (char *)s1;
	i = 0;
	if (s2[0] == '\0')
		return (d);
	while (n > 0)
	{
		if (*d == s2[i])
			i++;
		else
			i = 0;
		d++;
		n--;
		if (s2[i] == '\0')
		{
			while (i > 0)
			{
				d--;
				i--;
			}
			return (d);
		}
	}
	return (0);
}
