/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egligor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 19:01:45 by egligor           #+#    #+#             */
/*   Updated: 2015/11/10 19:27:42 by egligor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, char *src, size_t size)
{
	  long		i;
	  long		j;
	  long		a;

	  a = size;
	  i = ft_strlen(dst);
	  j = 0;
	  if (i >= a)
	  {
		  while (src[i] != '\0')
			  j++;
		  return (j + a);
	  }
	  while (src[i] != '\0')
	  {
		  if ((size_t)j < (size - ft_strlen(dst) - 1))
			  dst[i] = src[i];
		  j++;
		  i++;
	  }
	  dst[i] = '\0';
	  return (i - 1);
}
