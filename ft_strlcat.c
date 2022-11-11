/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:40:20 by astachni          #+#    #+#             */
/*   Updated: 2022/11/10 16:54:52 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lensrc;
	size_t	lendest;

	j = 0;
	i = 0;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (size == 0)
		return (lensrc);
	if (size < lendest)
		return (lensrc + size);
	while (dest[i])
		i++;
	while (src[j] && j < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (lensrc + lendest);
}
