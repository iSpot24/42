/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egligor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 18:53:45 by egligor           #+#    #+#             */
/*   Updated: 2015/11/10 19:01:31 by egligor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		count;
	int			i;

	i = ft_strlen(s1);
	count = 0;
	while (count < n)
	{
		s1[i] = s2[count];
		i++;
		count++;
	}
	return (s1);
}
