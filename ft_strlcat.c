/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:40:20 by astachni          #+#    #+#             */
/*   Updated: 2022/11/12 16:02:55 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (size < ft_strlen(dest) + 1)
		return (ft_strlen(src) + size);
	while (dest[i])
		i++;
	while (size > ft_strlen(dest) + 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src) + ft_strlen(dest));
}
