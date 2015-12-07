/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egligor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 04:13:24 by egligor           #+#    #+#             */
/*   Updated: 2015/11/04 04:22:48 by egligor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		count;

	count = 0;
	while (count < n)
	{
		if (count >= ft_strlen(src))
			dst[count] = '\0';
		else
			dst[count] = src[count];
		count++;
	}
	return (dst);
}
