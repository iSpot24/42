/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egligor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 03:24:41 by egligor           #+#    #+#             */
/*   Updated: 2015/11/10 18:36:32 by egligor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (s1[i] != '\0')
		i++;
	str = (char *)malloc(sizeof(char) * i);
	j = 0;
	while (j <= i)
	{
		str[j] = s1[j];
		j++;
	}
	return (str);
}
