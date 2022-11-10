/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin@42.fr <astachni>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:56:15 by marvin@42.f       #+#    #+#             */
/*   Updated: 2022/11/10 17:34:55 by marvin@42.f      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*alloc;
	int		len;

	alloc = malloc(count * size);
	len = 0;
	if (alloc == NULL)
	{
		return (NULL);
	}
	while (alloc[len])
	{
		alloc[len] = 0;
		len++;
	}
	return (alloc);
}
