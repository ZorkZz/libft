/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:04:00 by stachni           #+#    #+#             */
/*   Updated: 2022/11/12 16:57:34 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	unsigned char		ch;
	unsigned char		*dst;
	const unsigned char	*sr;
	size_t				i;

	ch = (unsigned char)c;
	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = 0;
	while (i < size)
	{
		dst[i] = sr[i];
		if (sr[i] == ch)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
