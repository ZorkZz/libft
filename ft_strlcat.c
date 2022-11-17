/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:40:20 by astachni          #+#    #+#             */
/*   Updated: 2022/11/17 18:42:08 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	srcsize;
	size_t	destsize;

	i = 0;
	if ((!dest && size == 0) || (!src && size == 0))
		return (0);
	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	if (size == 0)
		return (destsize + srcsize);
	if (size - 1 <= destsize)
		return (srcsize + size);
	while (destsize + i < size - 1)
	{
		dest[destsize + i] = src[i];
		i++;
	}
	dest[destsize + i] = 0;
	return (destsize + srcsize);
}
