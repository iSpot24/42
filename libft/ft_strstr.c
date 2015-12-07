/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egligor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 20:04:33 by egligor           #+#    #+#             */
/*   Updated: 2015/11/10 20:39:59 by egligor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char		*d;
	int		i;

	d = (char *)big;
	i = 0;
	if (little[0] == '\0')
		return (d);
	while (*d)
	{
		if (*d == little[i])
			i++;
		else
			i = 0;
		d++;
		if (little[i] == '\0')
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
